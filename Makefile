# Unix, using gcc

CC = gcc
TARGET =
TARGETEXTENSION =
OUTFMTS = -DOUTAOUT -DOUTBIN -DOUTELF -DOUTHUNK -DOUTSREC -DOUTTOS -DOUTVOBJ \
          -DOUTXFIL -DOUTHEX

CCOUT = -o
COPTS = -c -std=c99 -O2 -Wpedantic -DUNIX $(OUTFMTS)

LD = $(CC)
LDOUT = $(CCOUT)
LDFLAGS = -lm

RM = rm -f

# if DEBUG is defined, compile without optimizations and with debug symbols
ifdef DEBUG
COPTS=-c -g -std=c99 -Wpedantic -DUNIX $(OUTFMTS)
LDFLAGS+=-g
endif

include make.rules
