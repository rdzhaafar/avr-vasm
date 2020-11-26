#include "vasm.h"

#ifdef OUTIHEX

/* IHEX modes */
#define I8HEX  0 /* 16-bit address space */
#define I16HEX 1 /* 20-bit address space */
#define I32HEX 2 /* 32-bit address space */

/* Maximum address covered by I16HEX */
#define MEGABYTE (1 << 20)

/* IHEX record types */
#define REC_DAT 0 /* data */
#define REC_EOF 1 /* end of file */
#define REC_ESA 2 /* extended segment address */
#define REC_SSA 3 /* start segment address */
#define REC_ELA 4 /* extended linear address */
#define REC_SLA 5 /* start linear address */

static char *copyright = "vasm Intel HEX output module 0.1 (c) 2020 Rida Dzhaafar";

static int ihex_mode;
static int mode_set = 0; /* set to 1 if user specified the mode */

/* output buffer globals */
static uint8_t *buffer;       /* output buffer */
static size_t buffer_s = 10;  /* output buffer size */
static size_t buffer_idx = 0; /* current position in the buffer */

static void write_record(FILE *f, uint8_t type)
/* write record of TYPE to file */
{
  uint8_t csum;
  csum += type;

  switch (type) {
  }
}

static void output_data(FILE *f, uint8_t byte)
/* stores the ouput byte in buffer and flushes the buffer if necessary */
{
  buffer[buffer_idx] = byte;
  buffer_idx++;

  if (buffer_idx == buffer_s)
    write_record(f, REC_DAT);
}

static void detect_mode(section *sec)
/* try to detect what IHEX mode do we need to use based
   on the size of the output generated */
{
  section *s;
  atom *a;
  utaddr i, pc = 0, max = 0;

  /* search for the biggest address reached */
  for (s = sec; s; s = s->next) {
    pc = sec->org;
    for (a = s->first; a; a = a->next) {
      if (a->type == DATA)
        pc += a->content.db->size;
      else if (a->type == SPACE) {
        pc += a->content.sb->size;
      }
    }
    max = pc > max ? pc : max;
  }

  if (max <= UINT16_MAX)
    ihex_mode = I8HEX;
  else if (max <= MEGABYTE)
    ihex_mode = I16HEX;
  else
    ihex_mode = I32HEX;
}

static void write_output(FILE *f, section *sec, symbol *sym)
{
  utaddr i, j;
  atom *ap;
  section *sp;

  if (!sec)
    return;

  if (!mode_set)
    detect_mode(sec);

  for (; sym; sym = sym->next)
    if (sym->type == IMPORT)
      output_error(6, sym->name); /* undefined symbol sym->name */
}

static int parse_args(char *arg)
{
  size_t size;
  if (!strcmp(arg, "-i8hex")) {
    ihex_mode = I8HEX;
    mode_set = 1;
    return 1;
  }
  if (!strcmp(arg, "-i16hex")) {
    ihex_mode = I16HEX;
    mode_set = 1;
    return 1;
  }
  if (!strcmp(arg, "-i32hex")) {
    ihex_mode = I32HEX;
    mode_set = 1;
    return 1;
  }
  if (!strncmp(arg, "-record-size=", 13)) {
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
  if (sizeof(utaddr) > 4 || bitsperbyte != 8) {
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