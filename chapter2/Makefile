SRCS = $(wildcard *.c)
PROGS = $(patsubst %.c,%.o,$(SRCS))

%.o : %.c
	cc -o $@ $<

all : $(PROGS)

clean:
	rm -f $(PROGS)


.PHONY: clean
