/* AVR cpu backend
 */
#include "vasm.h"
#include "operands.h"

mnemonic mnemonics[] = {
#include "opcodes.h"
};
int mnemonic_cnt = sizeof(mnemonics) / sizeof(mnemonics[0]);

char *cpu_copyright = "AVR cpu backend 0.1 (c) 2020 Rida Dzhaafar";
char *cpuname = "AVR";
int bitsperbyte = 8;
int bytespertaddr = 2;

int avr_mnemonic_valid(int idx)
{
  return 1;
}

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
  new->type = UNKNOWN;
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
  char *indir = skip(p);
  expr *exp, *exp1;

  switch (required) {

    case REG:
      if (toupper((unsigned char) *indir++) != 'R')
        return PO_NOMATCH;
      exp = parse_expr(&indir);
      if (exp->type != NUM)
        return PO_CORRUPT;
      break;

    case REGR:
      if (toupper((unsigned char) *indir++) != 'R')
        return PO_NOMATCH;
      exp = parse_expr(&indir);
      if (exp->type != NUM)
        return PO_CORRUPT;
      if (((unsigned char) *indir++) != ':')
        return PO_NOMATCH;
      if (toupper((unsigned char) *indir++) != 'R')
        return PO_NOMATCH;
      exp1 = parse_expr(&indir);
      if (exp->type != NUM)
        return PO_CORRUPT;
      if (exp->c.val - exp1->c.val != 1)
        return PO_CORRUPT;
      break;

    case X:
      if (toupper((unsigned char) *indir++) != 'X')
        return PO_NOMATCH;
      break;

    case X_PLUS:
      if (toupper((unsigned char) *indir++) != 'X')
        return PO_NOMATCH;
      if (((unsigned char) *indir++) != '+')
        return PO_NOMATCH;
      break;

    case MINUS_X:
      if (((unsigned char) *indir++) != '-')
        return PO_NOMATCH;
      if (toupper((unsigned char) *indir++) != 'X')
        return PO_NOMATCH;
      break;

    case Y:
      if (toupper((unsigned char) *indir++) != 'Y')
        return PO_NOMATCH;
      break;

    case Y_PLUS:
      if (toupper((unsigned char) *indir++) != 'Y')
        return PO_NOMATCH;
      if (((unsigned char) *indir++) != '+')
        return PO_NOMATCH;
      break;

    case MINUS_Y:
      if (((unsigned char) *indir++) != '-')
        return PO_NOMATCH;
      if (toupper((unsigned char) *indir++) != 'Y')
        return PO_NOMATCH;
      break;

    case Y_PLUS_Q:
      if (toupper((unsigned char) *indir++) != 'Y')
        return PO_NOMATCH;
      if (((unsigned char) *indir++) != '+')
        return PO_NOMATCH;
      exp = parse_expr(&indir);
      break;

    case Z:
      if (toupper((unsigned char) *indir++) != 'Z')
        return PO_NOMATCH;
      break;

    case Z_PLUS:
      if (toupper((unsigned char) *indir++) != 'Z')
        return PO_NOMATCH;
      if (((unsigned char) *indir++) != '+')
        return PO_NOMATCH;
      break;

    case MINUS_Z:
      if (((unsigned char) *indir++) != '-')
        return PO_NOMATCH;
      if (toupper((unsigned char) *indir++) != 'Z')
        return PO_NOMATCH;
      break;

    case Z_PLUS_Q:
      if (toupper((unsigned char) *indir++) != 'Z')
        return PO_NOMATCH;
      if (((unsigned char) *indir++) != '+')
        return PO_NOMATCH;
      exp = parse_expr(&indir);
      break;

    case IMM:
      exp = parse_expr(&indir);
      break;
  }

  indir = skip(indir);

  if (indir - p < len)
    return PO_NOMATCH; /* trailing garbage in operand */
  op->val = exp;
  op->type = required;
  return PO_MATCH;
}