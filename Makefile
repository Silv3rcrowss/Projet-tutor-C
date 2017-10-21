projet: projet.o main.o
	gcc -o projet projet.o main.o
projet.o: projet.c
	gcc -o projet.o -c projet.c -Wall
main.o: main.c fonctions.h
	gcc -o main.o -c main.c -Wall