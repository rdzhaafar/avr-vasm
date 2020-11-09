#include "vasm.h"
#include "output_hex.h"

#ifdef OUTHEX

static char *copyright = "vasm hex output module 0.1 (c) 2020 Rida Dzhaafar";
static size_t rec_size = 10; /* size of a data record */
static size_t rec_s = 10;

/* checksum of an Intel HEX record is the least significant byte of the
   two's complement of the sum of all of its bytes */
static unsigned char checksum(unsigned char *rec, size_t start, size_t sz)
{
  unsigned char cs;
  size_t i;

  for (i=0;i<sz;i++){
    cs+=rec[i+start];
  }
  cs=~cs;
  cs++;
  return cs;
}

static size_t data_size(section *sec)
{
  size_t total = 0;
  section *sect = sec;
  atom *p;

  for (;sect;sect=sect->next){
    for (p=sect->first;p;p=p->next){
      if (p->type==DATA){
        total+=p->content.db->size;
      }
    }
  }
  return total;
}

static void write_output(FILE *f, section *sec, symbol *sym)
{
  size_t i,total=data_size(sec),read=0;
  atom *p;
  unsigned char *data,cs;

  data = mymalloc(sizeof(unsigned char)*total);

  for (;sec;sec=sec->next){
    for (p=sec->first;p;p=p->next){
      if (p->type!=DATA)
        continue;
      for (i=0;i<p->content.db->size;i++){
        data[read]=p->content.db->data[i];
        read++;
      }
    }
  }

  for(read=0,i=0;total-read>rec_s;read+=rec_s){
    fprintf(f,":%02x%04x00",rec_s,read);
    cs=checksum(data,i,rec_s);
    for(i=read;i<read+rec_s;i++)
      fprintf(f,"%02x",data[i]);
    fprintf(f,"%02x\n",cs);
  }

  if(read<total){
    fprintf(f,":%02x%04x00",total-read,read);
    cs=checksum(data,i,total-read);
    for(i=read;i<total;i++)
      fprintf(f,"%02x",data[i]);
    fprintf(f,"%02x\n",cs);
  }

  fprintf(f,":00000001ff\n");
  myfree(data);
}

static int parse_args(char *p)
{
  size_t base=strlen("-record-size="),sz;

  if(strlen(p)>base){
    sz=atoi(p+base);
    if(sz>255||sz<1)
      return 0;
    rec_size=sz;
    return 1;
  }
  return 0;
}

int init_output_hex(char **cp,void (**wo)(FILE *,section *,symbol *),int (**oa)(char *))
{
  /* we don't support arches that don't have an 8-bit byte
   or have target addresses bigger than 32-bits */
  if (bitsperbyte!=8 || sizeof(taddr)>4)
    return 0;
  *cp=copyright;
  *wo=write_output;
  *oa=parse_args;
  return 1;
}

#else

int init_output_hex(char **cp,void (**wo)(FILE *,section *,symbol *),int (**oa)(char *))
{
  return 0;
}
#endif