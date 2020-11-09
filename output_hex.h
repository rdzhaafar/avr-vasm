#ifdef OUTHEX

#define HEX_DATA           0
#define HEX_EOF            1
#define HEX_EXT_SEG_ADDR   2
#define HEX_START_SEG_ADDR 3
#define HEX_EXT_LIN_ADDR   4
#define HEX_START_LIN_ADDR 5

typedef struct {
  unsigned char type;
  utaddr addr;
  unsigned char *data;
  size_t size;
} hrecord;

#endif