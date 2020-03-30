all: programa

programa: main donador
	gcc -o donador main.o donador.o

main: main.c donador.h
	gcc -c main.c

donador: donador.c donador.h
	gcc -c donador.c