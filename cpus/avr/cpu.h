#define BIGENDIAN 0
#define LITTLEENDIAN 1

#define VASM_CPU_AVR 1

#define MAX_OPERANDS 3

#define MAX_QUALIFIERS 0

#define INST_ALIGN 1

#define MAX_QUALIFIERS 0

#define PARSE_CPU_LABEL(l, s) parse_cpu_label(l, s)
#define MNEMONIC_VALID(idx) valid_mnemonic(idx)

typedef int32_t taddr;
typedef uint32_t utaddr;

/* struct for storing an operand */
typedef struct {} operand;

/* struct for storing additional mnemonic info */
typedef struct {
        uint32_t opcode;
} mnemonic_extension;

int parse_cpu_label(char*, char**);
static int valid_mnemonic(int idx);