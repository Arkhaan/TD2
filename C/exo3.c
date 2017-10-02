#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ANIMAUX 50
#define MAX_CHAR 30

struct Animal{
    int poids;
    char *nom;
};

typedef struct Animal *ptr_Animal;

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

void new_animal(ptr_Animal Animalerie[], int i){

    ptr_Animal pitem = (ptr_Animal)malloc(sizeof(struct Animal));
    pitem -> nom = get_name();
    pitem -> poids = get_poids();
    Animalerie[i] = pitem;
}

void print_animaux(ptr_Animal Animalerie[], int i){
    int j;
    for(j=0;j<i;j++)
    {
        printf("Nom : %s\t Poids : %d\n", Animalerie[j]->nom, Animalerie[j]->poids);
    }
}

int main(int argv, char * argc[])
{
    int i = 0;
    ptr_Animal Animalerie[MAX_ANIMAUX];
    int choice;
    while(1){
        puts("\nTo enter a new animal, type 1.\nTo print the list of animals, type 2.\nTo leave this beautiful programme, type 42.\n");
        scanf("%d", &choice);
        puts("");
        switch(choice){
          case 1 : new_animal(Animalerie, i);
          i += 1; break;
          case 2 : print_animaux(Animalerie, i); break;
          case 42 : exit(0);
          default : printf("Mauvais, bouh!\n");
        }
    }



}
