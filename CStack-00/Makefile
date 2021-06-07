all: libstack.a game

libstack.a:	stack.o
	ar rcs libstack.a stack.o

stack.o: stack.c stack.h
	gcc -c stack.c -o stack.o

game: main.c
	gcc main.c -o game -I. -L. -lstack

clean:
	rm stack.o libstack.a game

