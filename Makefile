# Unix, using gcc

CC = gcc
TARGET =
TARGETEXTENSION =
OUTFMTS = -DOUTAOUT -DOUTBIN -DOUTELF -DOUTHUNK -DOUTSREC -DOUTTOS -DOUTVOBJ \
          -DOUTXFIL

CCOUT = -o
COPTS = -c -std=c99 -O2 -Wpedantic -DUNIX $(OUTFMTS)

LD = $(CC)
LDOUT = $(CCOUT)
LDFLAGS = -lm

RM = rm -f

# Add an option to compile with debug symbols
# works with gcc and clang
ifdef DEBUG_SYMBOLS
COPTS+=-g
LDFLAGS+=-g
endif

include make.rules
