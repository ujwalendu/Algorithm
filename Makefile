SRCS = $(wildcard *.c)

PROGS = $(patsubst %.c,%,$(SRCS))

#$(PROGS)
all:  

%: %.c
	$(CC) $(CFLAGS)  -o $@ $<

linkedlist:
	$(CC) $(CFLAGS) -o linkedlist.o linkedlist.c

run-linkedlist: linkedlist
	./linkedlist.o

