# // $@ : cible
# // $^ : dépendance
# // $< : premiere dependance

# fichier.o : fichier.c
# 	gcc -c $^ -o $@
#
# Animaux : fichier.o main.o
# 	gcc $^ -o $@

# commmande "make" pour compiler
# make tout seul execute la premiere cible
# make mrproper execute la cible mrproper
#etc..

sources = animalerie.c main.c
headers = animalerie.h
objets = $(sources:.c=.o)

Animaux : $(objets)
	gcc $^ -o $@

animalerie.o : animalerie.c
	gcc -c -g $^ -o $@
main.o : main.c
	gcc -c -g $^ -o $@
clean :
	rm -f *~ *.o

mrproper : clean
	rm -f Animaux

all : Animaux Executable2
# execute les cibles prédéfinies
