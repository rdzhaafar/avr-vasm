#define BIGENDIAN 0
#define LITTLEENDIAN 1

#define VASM_CPU_AVR 1

/* maximum amount of operands per mnemonic */
#define MAX_OPERANDS 3

#define MAX_QUALIFIERS 0

typedef int32_t taddr;
typedef uint32_t utaddr;

typedef struct {} operand;
typedef struct {} mnemonic_extension;