CC = gcc -W -Wall

all : main.o utilitaire.o fonctions_trigo.o fonctions_std.o
	$(CC) main.o utilitaire.o fonctions_trigo.o fonctions_std.o -o calculer -lm

main.o : main.c

utilitaire.o : utilitaire.c utilitaire.h

fonctions_trigo.o : fonctions_trigo.c fonctions_trigo.h

fonctions_std.o : fonctions_std.c fonctions_std.h

clean :
	rm *.o calculer
