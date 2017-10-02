#include <stdio.h>
#include <stdlib.h>
#include "liste.h"
#include "animalerie.h"

struct liste{
  ptr_Animal animal;
  ptr_liste next;
};

void ajouter(ptr_Animal animal, ptr_liste maliste);
ptr_liste creer_liste(ptr_Animal animal);
void afficher (ptr_liste maliste);
void supprimer(ptr_Animal animal, ptr_liste maliste);

void supprimer(ptr_Animal animal, ptr_liste maliste){
  ptr_liste precedent;
  int numero;
  while (maliste->next && maliste->animal != animal){
    precedent = maliste;
    maliste = maliste->next;
  }
  if(!(maliste->next)){
    printf("Cette valeur %d n'était pas dans la liste\n", numero);
    return;
  }
  precedent->next = maliste->next;
  free(maliste);
}

ptr_liste creer_liste(ptr_Animal animal){
  ptr_liste temp, courant;
  temp = (ptr_liste)malloc(sizeof(struct liste));
  temp->animal = animal;
  temp->next = NULL;
  return(temp);
}

void ajouter(ptr_Animal animal, ptr_liste maliste){
  ptr_liste temp;
  temp = (ptr_liste)malloc(sizeof(struct liste));
  temp->animal = animal;
  temp->next = NULL;
  while(maliste->next){
    maliste = maliste->next;
  }
  maliste->next = temp;
}

void afficher(ptr_liste maliste){
  while(maliste){
      {
          printf("Nom : %s\t Poids : %d\n", maliste->animal->nom, maliste->animal->poids);
      }
    maliste = maliste->next;
  }
}
