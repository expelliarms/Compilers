all: a.out

a.out: lex.yy.o y.tab.o Ass3_13CS10055.o
	gcc lex.yy.o y.tab.o -lfl

y.tab.o: y.tab.c y.tab.h
	gcc -c y.tab.c

lex.yy.o: lex.yy.c
	gcc -c lex.yy.c

lex.yy.c: ass3_13CS10055.l y.tab.h
	flex ass3_13CS10055.l

Ass3_13CS10055.o: Ass3_13CS10055.c y.tab.h
	gcc -c Ass3_13CS10055.c

y.tab.h: ass3_13CS10055.y
	yacc -dtv ass3_13CS10055.y

y.tab.c: ass3_13CS10055.y
	yacc -dtv ass3_13CS10055.y

clean:
	rm y.tab.c y.tab.h y.tab.o a.out lex.yy.c lex.yy.o y.output Ass3_13CS10055.o

run:
	./a.out < ass3_13CS10055_test.c
