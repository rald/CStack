all: libstack.a test

libstack.a:	stack.o
	ar rcs libstack.a stack.o

stack.o: stack.c stack.h
	gcc -c stack.c -o stack.o -Wall -g

test: test.c
	gcc test.c -o test -I. -L. -lstack -Wall -g

clean:
	rm stack.o libstack.a test

