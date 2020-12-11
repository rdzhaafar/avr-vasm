/* AVR cpu backend
 */

#define BIGENDIAN 0
#define LITTLEENDIAN 1

#define VASM_CPU_AVR 1

#define MAX_OPERANDS 2
#define MAX_QUALIFIERS 0

#define INST_ALIGN 1
#define DATA_ALIGN(n) 1
#define DATA_OPERAND(n) IMM

#define PARSE_CPU_LABEL(l, s) 0
#define MNEMONIC_VALID(idx) avr_mnemonic_valid(idx)

typedef int32_t taddr;
typedef uint32_t utaddr;

/* avr operand types */
#define  UNKNOWN  0
#define  REG      1  /* Register       */
#define  REGR     2  /* Register range */
#define  X        3  /* X-register     */
#define  X_PLUS   4  /* X+             */
#define  MINUS_X  5  /* -X             */
#define  Y        6  /* Y-register     */
#define  Y_PLUS   7  /* Y+             */
#define  MINUS_Y  8  /* -Y             */
#define  Y_PLUS_Q 9  /* Y+q            */
#define  Z        10 /* Z-register     */
#define  Z_PLUS   11 /* Z+             */
#define  MINUS_Z  12 /* -Z             */
#define  Z_PLUS_Q 13 /* Z+q            */
#define  IMM      14 /* Immediate      */

typedef struct {
  int type;
  expr *value;
} operand;

typedef struct {
  utaddr opcode;
  size_t size;
  utaddr (*sub_operands)(instruction *, utaddr);
} mnemonic_extension;

int avr_mnemonic_valid(int);