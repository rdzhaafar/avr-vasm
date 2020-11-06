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
#define DATA_OPERAND(n) IMM

#define PARSE_CPU_LABEL(l, s) 0
#define MNEMONIC_VALID(idx) 1

typedef int32_t taddr;
typedef uint32_t utaddr;

/* avr operand types */
typedef enum avr_op_t {
  DEFAULT = 0,
  NONE,        /* No operand     */
  REG,         /* Register       */
  REGR,        /* Register range */
  X,           /* X-register     */
  X_PLUS,      /* X+             */
  MINUS_X,     /* -X             */
  Y,           /* Y-register     */
  Y_PLUS,      /* Y+             */
  MINUS_Y,     /* -Y             */
  Y_PLUS_Q,    /* Y+q            */
  Z,           /* Z-register     */
  Z_PLUS,      /* Z+             */
  MINUS_Z,     /* -Z             */
  Z_PLUS_Q,    /* Z+q            */
  IMM,         /* Immediate      */
};

typedef struct {
  avr_op_t type;
  uint16_t value;
} operand;

typedef struct {
  utaddr opcode;
  size_t size;
} mnemonic_extension;