all: main.o books.o
	gcc -o program main.o books.o

main.o: main.c books.h
	gcc -c main.c

books.o: books.c books.h
	gcc -c books.c

run:
	./program

clean:
	rm *.o
	rm program
