all: main.o construct.o
	gcc -o test main.o construct.o

main.o: main.c construct.h
	gcc -c main.c

construct.o: construct.c construct.h
	gcc -c construct.c

run:
	./test