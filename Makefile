IDIR	:=inc
ODIR	:=obj
_DEPS   :=$(shell cd $(IDIR);ls *.h)
_OBJS   :=$(patsubst %.h,%.o,$(_DEPS))
DEPS	:=$(patsubst %,$(IDIR)/%,$(_DEPS)) 
OBJS	:=$(patsubst %,$(ODIR)/%,$(_OBJS)) 
TARGET	:=main.c

CFLAGS  := -I $(IDIR)
CC      := gcc

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(TARGET) $(OBJS)
	$(CC) -o needful $^ $(CFLAGS)

.PHONY: clean list

clean:
	rm -f $(ODIR)/*.o *~ core needful

list:
	# _DEPS=$(_DEPS)
	# _OBJS=$(_OBJS)
	# DEPS=$(DEPS)
	# OBJS=$(OBJS)
