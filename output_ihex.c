#include "vasm.h"

#ifdef OUTIHEX

char *ihex_copyright = "intel hex output module";

int ihex_parse_args(char *p)
{
  return 0;
}

void ihex_write_output(FILE *f, section *sec, symbol *sym)
{
  return;
}

int init_output_ihex(char **cp,void (**wo)(FILE *,section *,symbol *),int (**oa)(char *))
{
  *cp = ihex_copyright;
  *wo = ihex_write_output;
  *oa = ihex_parse_args;
}

#else

int init_output_ihex(char **cp,void (**wo)(FILE *,section *,symbol *),int (**oa)(char *))
{
  return 0;
}
#endif