# Unix, using gcc

CC = gcc
TARGET =
TARGETEXTENSION =
OUTFMTS = -DOUTAOUT -DOUTBIN -DOUTELF -DOUTHUNK -DOUTSREC -DOUTTOS -DOUTVOBJ \
          -DOUTXFIL -DOUTIHEX

CCOUT = -o
# TODO: remove -g, bring back -O2
COPTS = -c -std=c99 -g -Wpedantic -DUNIX $(OUTFMTS)

LD = $(CC)
LDOUT = $(CCOUT)
# TODO: remove -g
LDFLAGS = -g -lm

RM = rm -f

include make.rules
