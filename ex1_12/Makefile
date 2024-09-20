CC=gcc
CFLAGS=
OBJS=ex1_12_main.o ex1_12_subnum.o
LIBS=
all : sub.out

sub.out : $(OBJS)
	$(CC) $(CFLAGS) -o sub.out $(OBJS) $(LIBS)

ex1_12_main.o : ex1_12_main.c
	$(CC) $(CFLAGS) -c ex1_12_main.c
ex1_12_subnum.o : ex1_12_subnum.c
	$(CC) $(CFLAGS) -c ex1_12_subnum.c
clean:
	rm -f $(OBJS) sub.out *.o core
