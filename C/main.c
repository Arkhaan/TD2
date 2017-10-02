#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "animalerie.h"

int main(int argv, char * argc[])
{
    ptr_liste Animalerie;
    int choice;
    printf("\033c" );
    while(1){
        puts("\nTo enter a new animal, type 1.\nTo print the list of animals, type 2.\nTo remove an animal, type 3.\nTo leave this beautiful programme, type 42.\n");
        scanf("%d", &choice);
        puts("");
        switch(choice){
          case 1 : Animalerie = new_animal(Animalerie);  break;
          case 2 : afficher(Animalerie); break;
          case 3 : supprimer(Animalerie); break;
          case 42 : exit(0);
          default : printf("Mauvais, bouh!\n");
        }
        puts("Press enter to continue...\n");
        stdin = freopen(NULL,"r",stdin);
        getchar();
        printf("\033c" );
    }
}
