a.out: myl.o test.o
	cc test.o myl.o
myl.o: myl.c myl.h
	cc -Wall -c myl.c
test.o: myl.h test.c
	cc -Wall -c test.c
clean: myl.o test.o a.out
