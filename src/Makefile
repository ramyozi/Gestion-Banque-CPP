
#CC=g++
#CFLAGS=-c -Wall
#LDFLAGS=
#SOURCES=main.cpp Adherent.h Banque.h  Compte_E_L.h  Compte_livre_A.h  Compte_Bloque.h  Compte_Courant.h  Compte.h  Date.h
#OBJECTS=$(SOURCES:.h=.o)
#EXECUTABLE=MaBanque.exe
#
#all: $(SOURCES) $(EXECUTABLE)
#
#$(EXECUTABLE): $(OBJECTS)
#	$(CC) $(LDFLAGS) $(OBJECTS) -o $@
#
#.cpp.o:
#	$(CC) $(CFLAGS) $< -o $@
#
#clean:
#	rm -rf *.o $(EXECUTABLE)

MaBanque: Date.o Personne.o Compte.o Banque.o Compte_E_L.o Compte_livre_A.o Compte_Bloque.o Compte_Courant.o Adherent.o main.o
	g++ Date.o Personne.o Compte.o Banque.o Compte_E_L.o Compte_livre_A.o Compte_Bloque.o Compte_Courant.o Adherent.o main.o -o MaBanque
Banque.o :Banque.cpp Banque.h Adherent.h
	g++ -c Banque.cpp
Adherent.o :Adherent.cpp Adherent.h Personne.h Compte.h
	g++ -c Adherent.cpp
Compte_Courant.o : Compte_Courant.cpp Compte_Courant.h Compte.h
	g++ -c Compte_Courant.cpp
Compte_Bloque.o : Compte_Bloque.cpp Compte_Bloque.h Compte.h
	g++ -c Compte_Bloque.cpp
Compte_livre_A.o : Compte_livre_A.cpp Compte_livre_A.h Compte.h
	g++ -c Compte_livre_A.cpp
Compte_E_L.o : Compte_E_L.cpp Compte_E_L.h Compte.h
	g++ -c Compte_E_L.cpp
Personne.o : Personne.cpp Personne.h Date.h
	g++ -c Personne.cpp
Compte.o : Compte.cpp Compte.h Date.h
	g++ -c Compte.cpp
Date.o : Date.cpp Date.h
	g++ -c Date.cpp


clean :
	rm *.o *.xls MaBanque

