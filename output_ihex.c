#include "vasm.h"

#ifdef OUTIHEX

/* ihex modes */
#define I8HEX  0
#define I16HEX 1
#define I32HEX 2

#define MEGABYTE 1048576U

static char *copyright = "vasm Intel HEX output module 0.1 (c) 2020 Rida Dzhaafar";
/* default size of a data record in bytes */
static uint8_t ihex_rec_sz = 10;

static uint32_t data_size(section *sec)
{
  uint32_t total = 0;
  section *sect = sec;
  atom *p;

  for (; sect; sect = sect->next)
    for (p = sect->first; p; p = p->next)
      if (p->type == DATA)
        total += p->content.db->size;
  return total;
}

static void check_undefined(symbol *sym)
{
  symbol *symb;

  for(symb=sym; symb; symb=symb->next) {
    if (symb->type == IMPORT)
      output_error(6,symb->name);
  }
}

static void check_overlapping(section *sec)
{
  section *s, *s2;

  for (s=sec; s!=NULL; s=s->next) {
    for (s2=s->next; s2; s2=s2->next) {
      if (((ULLTADDR(s2->org) >= ULLTADDR(s->org) &&
            ULLTADDR(s2->org) < ULLTADDR(s->pc)) ||
           (ULLTADDR(s2->pc) > ULLTADDR(s->org) &&
            ULLTADDR(s2->pc) <= ULLTADDR(s->pc))))
        output_error(0);
    }
  }
}

static void write_hex(FILE *f, int mode, uint8_t *data, uint32_t size)
{
  uint32_t done = 0;
  uint16_t ext = 0, addr = 0, last = 0;
  uint8_t temp, csum, rec, i;

  while (done < size) {
    rec = size - done >= ihex_rec_sz ? ihex_rec_sz : size - done;

    if (last && last > addr) {
      if (mode == I16HEX) {
        ext += 0x0010;
        csum = ext;
        csum += 4; /* 02 + 00 + ... + 02 */
        csum = ~csum + 1;
        fprintf(f, ":02000002%04X%02X\n", ext, csum);
      }
      if (mode == I32HEX) {
        ext++;
        csum = ext + (ext >> 8);
        csum += 6; /* 02 + 00 + ... + 04 */
        csum = ~csum + 1;
        fprintf(f, ":02000004%04X%02X\n", ext, csum);
      }
    }

    fprintf(f, ":%02X%04X00", rec, addr);
    csum = rec + (addr >> 8) + addr;
    for (i = 0; i < rec; i++) {
      temp = data[addr + i];
      fprintf(f, "%02X", temp);
      csum += temp;
    }
    csum = ~csum + 1;
    fprintf(f, "%02X\n", csum);

    last = addr;
    addr += rec;
    done += rec;
  }

  fprintf(f, ":00000001FF");
}

static void write_output(FILE *f, section *sec, symbol *sym)
{
  uint32_t size, i, j=0;
  uint8_t *data;
  int mode = I8HEX;
  atom *a;

  /* fail if checks don't pass */
  check_undefined(sym);
  check_overlapping(sec);

  size = data_size(sec);
  data = mymalloc(sizeof(uint8_t) * size);

  for (; sec; sec = sec->next) {
    for (a = sec->first; a; a = a->next) {
      if (a->type != DATA)
        continue;
      for (i = 0; i < a->content.db->size; i++) {
        data[j] = a->content.db->data[i];
        j++;
      }
    }
  }

  if (size > UINT8_MAX && size <= MEGABYTE)
    mode = I16HEX;
  else if (size > UINT8_MAX && size <= UINT32_MAX)
    mode = I32HEX;

  write_hex(f, mode, data, size);

  myfree(data);
}

static int parse_args(char *p)
{
  uint8_t sz;

  if (strlen(p) > 13 && !strncmp("-record-size=", p, 13)) {
    sz = atoi(p + 13);
    if (sz < 1 || sz > 255)
      return 0;
    ihex_rec_sz = sz;
    return 1;
  }
  return 0;
}

int init_output_ihex(char **cp, void (**wo)(FILE *, section *, symbol *), int (**oa)(char *))
{
  if (sizeof(utaddr) > 4 || bitsperbyte != 8){
    output_error(1, cpuname);
    return 0;
  }

  *cp = copyright;
  *wo = write_output;
  *oa = parse_args;
  return 1;
}

#else
int init_output_ihex(char **cp, void (**wo)(FILE *, section *, symbol *), int (**oa)(char *))
{
  return 0;
}
#endif