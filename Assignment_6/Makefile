all: a.out
	chmod 755 compile


a.out: lex.yy.o y.tab.o ass6_13CS10055_translator.o ass6_13CS10055_target_translator.o 
	g++ lex.yy.o y.tab.o ass6_13CS10055_translator.o ass6_13CS10055_target_translator.o -lfl


y.tab.o:	y.tab.c
	g++ -c y.tab.c

lex.yy.o:	lex.yy.c
	g++ -c lex.yy.c

lex.yy.c:	ass6_13CS10055.l y.tab.c
	flex ass6_13CS10055.l

y.tab.c:	ass6_13CS10055.y
	yacc -dtv -Wother ass6_13CS10055.y

ass6_13CS10055_translator.o: ass6_13CS10055_translator.h ass6_13CS10055_translator.cxx
	g++ -c ass6_13CS10055_translator.cxx

ass6_13CS10055_target_translator.o: ass6_13CS10055_target_translator.cxx
	g++ -c ass6_13CS10055_target_translator.cxx 

clean:
	rm a.out y.tab.o lex.yy.o lex.yy.c y.tab.c y.tab.h y.output ass6_13CS10055_translator.o ass6_13CS10055_target_translator.o


