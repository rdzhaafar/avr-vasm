/* my editor won't shut up about unknown types */
#include <stdint.h>
#include <stdio.h>
/* TODO: remove */

#define BIGENDIAN 0
#define LITTLEENDIAN 1
#define VASM_CPU_AVR 1
#define MAX_OPERANDS 2
#define MAX_QUALIFIERS 0
#define INST_ALIGN 1
#define DATA_ALIGN(n) 1
#define DATA_OPERAND(n) DATA8
#define MAX_QUALIFIERS 0

#define PARSE_CPU_LABEL(l, s) 0
#define MNEMONIC_VALID(idx) 1

typedef int32_t taddr;
typedef uint32_t utaddr;

/* operand types */
enum op_t {
  DEFAULT = 0,
  NONE,         /* implied operand                      */
  REG_ALL,      /* all registers  R[0-31]               */
  REG_HI,       /* high registers R[16-31]              */
  REG_FMUL,     /* fmul* instruction registers R[16-23] */
  WREG_ALL,     /* all "word" registers R[0,2,4...30]   */
  WREG_HI,      /* high "word" registers R[24,26,28,30] */
  IOREG_ALL,    /* all i/o registers [0-63]             */
  IOREG_LO,     /* low i/o registers [0-31]             */
  ADDR,         /* SRAM address                         */
  X,            /* X-register                           */
  X_PL,         /* X+                                   */
  MI_X,         /* -X                                   */
  Y,            /* Y-register                           */
  Y_PL,         /* Y+                                   */
  MI_Y,         /* -Y                                   */
  Y_Q,          /* Y+q                                  */
  Z,            /* Z-register                           */
  Z_PL,         /* Z+                                   */
  MI_Z,         /* -Z                                   */
  Z_Q,          /* Z+q                                  */
  BIT_N,        /* bit number [0-7]                     */
  DATA8,        /* immediate data 8-bit                 */
  DATA7,        /* immedaite data 7-bit                 */
  DATA6,        /* immediate data 6-bit                 */
  BRA,          /* relative branch offset [(-64)-63]    */
  DES,          /* number of DES iterations [0-16]      */
};

typedef struct {
  enum op_t type;
  uint16_t value;
} operand;

typedef struct {
  utaddr opcode;
  size_t size;
} mnemonic_extension;