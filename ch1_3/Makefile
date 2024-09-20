CC=gcc
CFLAGS=
OBJS=ch1_3_main.o ch1_3_addnum.o
LIBS=
all : add.out

add.out : $(OBJS)
	$(CC) $(CFLAGS) -o add.out $(OBJS) $(LIBS)

ch1_3_main.o : ch1_3_main.c
	$(CC) $(CFLAGS) -c ch1_3_main.c
ch1_3_addnum.o : ch1_3_addnum.c
	$(CC) $(CFLAGS) -c ch1_3_addnum.c
clean:
	rm -f $(OBJS) add.out *.o core
