#define BIGENDIAN 0
#define LITTLEENDIAN 1
#define VASM_CPU_AVR 1
#define MAX_OPERANDS 3
#define MAX_QUALIFIERS 0
#define INST_ALIGN 1
#define DATA_ALIGN(n) 1
#define DATA_OPERAND(n) OP_DATA
#define MAX_QUALIFIERS 0

#define PARSE_CPU_LABEL(l, s) 0
#define MNEMONIC_VALID(idx) 1

typedef int32_t taddr;
typedef uint32_t utaddr;

typedef struct
{
  int type;
} operand;

typedef struct
{
  utaddr opcode;
  size_t length;
} mnemonic_extension;

/* operand types */
#define OP_REG_ALL  1
#define OP_REG_HI   2  /* high registers R16-R31 */
#define OP_REG_WORD 3  /* whole-word registers R24,26,28,30 */
#define OP_REG_FMUL 4  /* fmul* registers R16-R23 */
#define OP_REG_X    5
#define OP_REG_X_PL 6  /* X+ */
#define OP_REG_MI_X 7  /* -X */
#define OP_REG_Y    8
#define OP_REG_Y_PL 9  /* Y+ */
#define OP_REG_MI_Y 10 /* -Y */
#define OP_REG_Z    11
#define OP_REG_Z_PL 12 /* Z+ */
#define OP_REG_MI_Z 13 /* -Z */
#define OP_ADDR     14 /* SRAM address */
#define OP_IO       15 /* I/O space address */
#define OP_BIT_NO   16 /* bit 0-7 */
#define OP_Q        17 /* offset for relative addressing */
#define OP_DATA     18 /* constant data */