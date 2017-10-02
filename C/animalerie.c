#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_CHAR 30

typedef struct liste *ptr_liste;
typedef struct Animal *ptr_Animal;

struct Animal{
    int poids;
    char *nom;
};

struct liste{
  ptr_Animal animal;
  ptr_liste next;
};

void ajouter(ptr_Animal animal, ptr_liste maliste);
ptr_liste creer_liste(ptr_Animal animal);
void afficher (ptr_liste maliste);
void supprimer(ptr_liste maliste);

int get_poids();
char* get_name();
ptr_liste new_animal(ptr_liste Animalerie);
int main(int argv, char * argc[]);

int get_poids(){
    int poids;
    puts("Entrez le poids : ");
    scanf("%d", &poids);
    return poids;
}

char* get_name(){
    char *nom;
    char chaine[MAX_CHAR];

    puts("Entrez le nom : ");
    scanf("%s", chaine);
    nom = (char*) malloc(sizeof(char)*strlen(chaine)+1);
    strcpy(nom, chaine);
    return nom;
}

ptr_liste new_animal(ptr_liste Animalerie){

    ptr_Animal pitem = (ptr_Animal)malloc(sizeof(struct Animal));
    pitem -> nom = get_name();
    pitem -> poids = get_poids();
    if(!(Animalerie)){
        Animalerie = creer_liste(pitem);
    }
    else{
        ajouter(pitem, Animalerie);
    }
    puts("Animal ajouté avec succès!");
    return Animalerie;
}

void supprimer(ptr_liste maliste){
    int numero;

    puts("Voici la liste des animaux :\n");
    afficher(maliste);
    puts("Indiquez le numéro de l'animal à supprimer :");
    scanf("%d", &numero);
    ptr_liste precedent;
    precedent = (ptr_liste)malloc(sizeof(struct liste));
    int counter = 1;
    while (maliste->next && counter <= numero){
        precedent = maliste;
        maliste = maliste->next;
        counter++;
      }
      if(!(maliste->next) && counter < numero){
        printf("L'animal n°%d n'existe pas encore.\n", numero);
        return;
      }
      precedent->animal = maliste->animal;
      precedent->next = maliste->next;
      free(maliste);
      puts("Animal retiré avec succès!\n");
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
    int counter = 1;
    if(!(maliste)){
        puts("Il n'y a pas encore d'animaux à afficher.\n");
        return;
    }
      while(maliste){
          {
              printf("N°%d -> Nom : %s\t Poids : %d\n", counter, maliste->animal->nom, maliste->animal->poids);
              counter++;
          }
        maliste = maliste->next;
      }
}
