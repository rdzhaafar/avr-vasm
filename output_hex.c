#include "vasm.h"
#if defined(OUTHEX) && defined(VASM_CPU_650X)

/* hex record types */
#define HEX_DATA           0x0
#define HEX_EOF            0x1
#define HEX_EXT_SEG_ADDR   0x2
#define HEX_START_SEG_ADDR 0x3
#define HEX_EXT_LIN_ADDR   0x4
#define HEX_START_LIN_ADDR 0x5

/* max and min size of a hex record (in bytes) */
#define HEX_REC_MAX_S 0xff
#define HEX_REC_MIN_S 0x01

static char *copyright = "vasm hex output module 0.1 (c) 2020 Rida Dzhaafar";

static uint8_t rec_size = 10; /* default size of a data record (in bytes)  */
static int capital_hex = 0;   /* print lowercase hex characters by default */

/* returns the size of data segment */
static size_t data_size(section *sec)
{
  size_t total = 0;
  section *sect = sec;
  atom *p;

  for (; sect; sect = sect->next)
    for (p = sect->first; p; p = p->next)
      if (p->type == DATA)
        total += p->content.db->size;
  return total;
}

/* returns the checksum of a hex record */
static uint8_t checksum(uint8_t type, uint8_t *data, size_t size, utaddr addr)
{
  size_t i;
  uint8_t cs = 0;

  cs += type;
  for (i = 0; i < size; i++)
    cs += data[i];
  for (i = 0; i < sizeof(size_t); i++)
    cs += size >> (8 * i);
  for (i = 0; i < sizeof(utaddr); i++)
    cs += addr >> (8 * i);
  cs = ~cs;
  cs += 1;
  return cs;
}

/* writes a single record to file */
static void write_record(FILE *f, uint8_t type, uint8_t *data, size_t size, utaddr addr)
{
  uint8_t cs = checksum(type, data, size, addr);
  size_t i;
  char *start, *d, *end;
  if (capital_hex) {
    start = ":%02X%04X%02X";
    d = "%02X";
    end = "%02X\n";
  } else {
    start = ":%02x%04x%02x";
    d = "%02x";
    end = "%02x\n";
  }
  fprintf(f, start, size, addr, type);
  for (i = 0; i < size; i++)
    fprintf(f, d, data[i]);
  fprintf(f, end, cs);
}

static void write_output(FILE *f, section *sec, symbol *sym)
{
  size_t data_s = data_size(sec), i, j=0;
  uint8_t *data = mymalloc(sizeof(uint8_t) * data_s);
  if (data == NULL)
    general_error(17);
  atom *a;

  for(; sec; sec = sec->next){
    for(a = sec->first; a; a = a->next){
      if(a->type != DATA)
        continue;
      for(i = 0; i < a->content.db->size; i++){
        data[j] = a->content.db->data[i];
        j++;
      }
    }
  }

  i = 0;
  while (i < data_s) {
    j = data_s - i > rec_size ? rec_size : data_s - i;
    write_record(f, HEX_DATA, data + i, j, i);
    i += j;
  }
  write_record(f, HEX_EOF, NULL, 0, 0);

  myfree(data);
}

static int parse_args(char *p)
{
  char *rcmd = "-record-size=";
  size_t rcmds = strlen(rcmd), sz;

  if (strlen(p) > rcmds && !strncmp(rcmd, p, rcmds)) {
    sz = atoi(p + rcmds);
    if (sz > HEX_REC_MAX_S || sz < HEX_REC_MIN_S)
      return 0;
    rec_size = sz;
    return 1;
  }
  if (!strcmp("-capital-hex", p)) {
    capital_hex = 1;
    return 1;
  }
  return 0;
}

int init_output_hex(char **cp, void (**wo)(FILE *, section *, symbol *), int (**oa)(char *))
{
  *cp = copyright;
  *wo = write_output;
  *oa = parse_args;
  return 1;
}

#else

int init_output_hex(char **cp, void (**wo)(FILE *, section *, symbol *), int (**oa)(char *))
{
  return 0;
}
#endif