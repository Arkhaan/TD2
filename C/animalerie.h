#ifndef __ANIMALERIE__
#define __ANIMALERIE__

typedef struct Animal *ptr_Animal;
typedef struct liste *ptr_liste;

extern void ajouter(ptr_Animal animal, ptr_liste maliste);
extern ptr_liste creer_liste(ptr_Animal animal);
extern void afficher (ptr_liste maliste);
extern void supprimer(ptr_liste maliste);

extern int get_poids();
extern char* get_name();
extern ptr_liste new_animal(ptr_liste Animalerie);
extern int main(int argv, char * argc[]);

#endif
