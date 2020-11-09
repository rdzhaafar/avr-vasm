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

typedef int16_t taddr;
typedef uint16_t utaddr;

/* avr operand types */
#define  DEFAULT  0
#define  NONE     1   /* No operand     */
#define  REG      2   /* Register       */
#define  REGR     3   /* Register range */
#define  X        4   /* X-register     */
#define  X_PLUS   5   /* X+             */
#define  MINUS_X  6   /* -X             */
#define  Y        7   /* Y-register     */
#define  Y_PLUS   8   /* Y+             */
#define  MINUS_Y  9   /* -Y             */
#define  Y_PLUS_Q 10  /* Y+q            */
#define  Z        11  /* Z-register     */
#define  Z_PLUS   12  /* Z+             */
#define  MINUS_Z  13  /* -Z             */
#define  Z_PLUS_Q 14  /* Z+q            */
#define  IMM      15  /* Immediate      */

typedef struct {
  int type;
  uint16_t value;
} operand;

typedef struct {
  uint32_t opcode;
  size_t size;
} mnemonic_extension;