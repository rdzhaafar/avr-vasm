#include "vasm.h"

#ifdef OUTIHEX

#define I8HEX  0
#define I16HEX 1
#define I32HEX 2

#define REC_DAT 0 
#define REC_EOF 1 
#define REC_ESA 2 
#define REC_SSA 3 
#define REC_ELA 4 
#define REC_SLA 5

static char *copyright = "vasm Intel HEX output module 0.1 (c) 2020 Rida Dzhaafar";

static int ihex_mode = I8HEX;

static uint8_t *buffer;       
static uint8_t buffer_s = 10;  
static uint8_t buffer_i = 0;

static uint32_t pos = 0;
static uint16_t last_ext = 0; /* last written extended segment/linear address */

static void write_record(FILE *f, uint8_t type)
/* write an ihex record of TYPE to the file */
{
  uint8_t csum = type;
  uint8_t i;
  uint32_t start;
  uint16_t ext;

  switch (type) {

    case REC_DAT:
      start = pos - buffer_i - 1;
      ext = start >> 16;
      start &= 0xFFFF;
      
      if (ext != last_ext) {
        last_ext = ext;
        if (ihex_mode == I16HEX)
          write_record(f, REC_ESA);
        else
          write_record(f, REC_ELA);
      }

      fprintf(f, ":%02X%04X00", buffer_i, start);
      csum += start;
      csum += start >> 8;
      csum += buffer_i;
      for (i = 0; i < buffer_i; i++) {
        csum += buffer[i];
        fprintf(f, "%02X", buffer[i]);
      }
      csum = (~csum) + 1;
      fprintf(f, "%02X\n", csum);
      break;

    case REC_EOF:
      fprintf(f, ":00000001FF");
      break;
    
    case REC_ESA:
      ext = last_ext << 4;
      csum += 2;
      csum += ext >> 8;
      csum += ext;
      csum = (~csum) + 1;
      fprintf(f, ":02000002%04X%02X\n", ext & 0xFFFF, csum);
      break;

    case REC_ELA:
      ext = last_ext;
      csum += 2;
      csum += ext >> 8;
      csum += ext;
      csum = (~csum) + 1;
      fprintf(f, ":02000004%04X%02X\n", ext, csum);
  }
}

static void buffer_data(FILE *f, uint8_t b)
/* store byte in the buffer and flush if necessary */
{
  buffer[buffer_i] = b;
  buffer_i++;
  pos++;
  
  if (buffer_i == buffer_s) {
    write_record(f, REC_DAT);
    buffer_i = 0;
  }
}

static void align(FILE *f, section *sec, atom *a)
{
  uint32_t align = balign(pos, a->align);
  int i;
  uint32_t len;
  uint8_t *fill;

  if (align == 0)
    return;

  if (a->type == SPACE && a->content.sb->space == 0) {
    if (a->content.sb->maxalignbytes != 0 &&
        align > a->content.sb->maxalignbytes)
      return;
    fill = a->content.sb->fill;
    len = a->content.sb->size;
  } else {
    fill = sec->pad;
    len = sec->padbytes;
  }

  while (align % len) {
    buffer_data(f, 0);
    align--;
  }
  printf("fill (%d): %04X\n",len,fill[0]);
  while (align >= len) {
    for(i = 0; i < len; i++) {
      buffer_data(f, fill[i]);
      align--;
    }
  }

  while (len--) {
    buffer_data(f, 0);
  }
    
}

static void write_output(FILE *f, section *sec, symbol *sym)
{
  uint32_t i, j;
  atom *ap;
  section *sp;

  if (!sec)
    return;
  
  buffer = mymalloc(sizeof(uint8_t) * buffer_s);

  for (; sym; sym = sym->next)
    if (sym->type == IMPORT)
      output_error(6, sym->name); /* undefined symbol sym->name */

  for (sp = sec; sp; sp = sp->next) {
    pos = ULLTADDR(sp->org);
    for (ap = sp->first; ap; ap = ap->next) {
      align(f, sp, ap);
      if (ap->type == DATA) {
        for (i = 0; i < ap->content.db->size; i++)
          buffer_data(f, ap->content.db->data[i]);
      } else if (ap->type == SPACE) {
        for (i = 0; i < ap->content.sb->space; i++)
          for (j = 0; j < ap->content.sb->size; j++)
            buffer_data(f, ap->content.sb->fill[j]);
      }
    }
    write_record(f, REC_DAT);
  }

  write_record(f, REC_EOF);
  
  myfree(buffer);
}

static int parse_args(char *arg)
{
  size_t size;
  if (!strcmp(arg, "-i8hex")) {
    ihex_mode = I8HEX;
    return 1;
  }
  else if (!strcmp(arg, "-i16hex")) {
    ihex_mode = I16HEX;
    return 1;
  }
  else if (!strcmp(arg, "-i32hex")) {
    ihex_mode = I32HEX;
    return 1;
  }
  else if (!strncmp(arg, "-record-size=", 13)) {
    size = atoi(arg + 13);
    /* an IHEX record cannot be bigger than 0xff bytes in size */
    if (size < 1 || size > 255)
      return 0;
    buffer_s = size;
    return 1;
  }
  return 0;
}

int init_output_ihex(char **cp, void (**wo)(FILE *, section *, symbol *), int (**oa)(char *))
{
  if (sizeof(utaddr) > sizeof(uint32_t) || bitsperbyte != 8) {
    output_error(1, cpuname); /* output module doesn't support cpuname */
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