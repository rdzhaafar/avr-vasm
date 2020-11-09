#include "vasm.h"

mnemonic mnemonics[] = {
#include "opcodes.h"
};

int mnemonic_cnt = sizeof(mnemonics) / sizeof(mnemonics[0]);

char *cpu_copyright = "avr cpu backend";
char *cpuname = "avr";
int bitsperbyte = 8;
int bytespertaddr = 2;

int cpu_args(char *p)
{
  return 0;
}

int init_cpu()
{
  return 1;
}

operand *new_operand()
{
  operand *new = mymalloc(sizeof(operand));
  new->type = DEFAULT;
  return new;
}

dblock *eval_data(operand *op, size_t bitsize, section *sec, taddr pc)
{
  dblock *db = new_dblock();
  return db;
}

dblock *eval_instruction(instruction *ip, section *sec, taddr pc)
{
  dblock *db = new_dblock();
  return db;
}

size_t instruction_size(instruction *ip, section *sec, taddr pc)
{
  return mnemonics[ip->code].ext.size;
}

char *parse_cpu_special(char *start)
{
  return start;
}

int parse_operand(char *p, int len, operand *op, int required)
{
  return PO_NOMATCH;
}