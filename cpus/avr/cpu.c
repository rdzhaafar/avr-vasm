#include "vasm.h"

mnemonic mnemonics[] = {
#include "opcodes.h"
};

int mnemonic_cnt = sizeof(mnemonics) / sizeof(mnemonics[0]);

char *cpu_copyright = "avr cpu backend";
char *cpuname = "avr";
int bitsperbyte = 8;
int bytesperaddr = 2;

/* parse cpu args
 * if an arg was understood, handle it and return 1
 * else return 0
 */
int cpu_args(char *p)
{
        return 1;
}

/* initialize cpu module
 * return non-zero on success,
 * return zero on fail
 */
int init_cpu()
{
        return 1;
}

/* initialize the operand struct
 * and return a pointer to it
 */
operand *new_operand()
{
        operand *new = mymalloc(sizeof(operand));
        return new;
}

/* evaluate some data and return
 * a pointer to dblock.
 * Throw a cpu_error if something doesn't
 * go as planned
 */
dblock *eval_data(operand *op, size_t bitsize, section *sec, taddr pc)
{
        dblock *db = new_dblock();
        return db;
}

/* evaluate an instruction and
 * return a pointer to dblock.
 * Throw a cpu_error if something
 * doesn't go as planned
 */
dblock *eval_instruction(instruction *ip, section *sec, taddr pc)
{
        dblock *db = new_dblock();
        return db;
}

/* return the size of an
 * instruction in CPU words
 */
size_t instruction_size(instruction *ip, section *sec, taddr pc)
{
        return 1;
}

/* parse a cpu-specific label
 * return 0 if no directive was recognized.
 * Referred to by the PARSE_CPU_LABEL(l, s) macro
 */
int parse_cpu_label(char *labname, char **start)
{
        return 0;
}

/* parse a cpu-specific directive and
 * return the position of text right after
 */
char *parse_cpu_special(char *start)
{
        return start;
}

/* return non-zero if a given mnemonic
 * from the mnemonics array is available
 * Referred to by the MNEMONIC_VALID(idx) macro
 */
static int valid_mnemonic(int idx)
{
        return 1;
}

/* parse a cpu operand and fill out the
 * passed op struct accordingly. Return
 * one of the error/success codes from vasm.h
 */
int parse_operand(char *p, int len, operand *op, int required)
{
        return PO_NOMATCH;
}