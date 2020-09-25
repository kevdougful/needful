CC     = gcc
CFLAGS = -I.
DEPS   = $(wildcard *.h)
OBJS   = $(patsubst %.h, %.o, $(DEPS))

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: main.c $(OBJS)
	$(CC) -o needful $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o *~ core needful
