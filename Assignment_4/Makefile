all: a.out

a.out: lex.yy.c y.tab.c ass4__13CS10055.o
	g++ lex.yy.c y.tab.c ass4__13CS10055.o -lfl

lex.yy.c: ass4_13CS10055.l
	flex ass4_13CS10055.l

y.tab.c: ass4_13CS10055.y
	yacc -dtv ass4_13CS10055.y

ass4__13CS10055.o: ass4__13CS10055.c
	g++ -c ass4__13CS10055.c

clean:
	rm y.tab.c y.tab.h a.out lex.yy.c y.output ass4__13CS10055.o