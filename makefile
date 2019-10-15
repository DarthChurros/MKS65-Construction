all: main.o functions.o
	gcc -o main.o functions.o

main.o: main.c headers.h
	gcc -c main.c

functions.o: functions.c headers.h
	gcc -c functions.c
