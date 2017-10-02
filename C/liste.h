#ifndef __LISTE__
#define __LISTE__

typedef struct liste *ptr_liste;
typedef struct Animal *ptr_Animal;

extern int get_poids();
extern char* get_name();
extern void new_animal(ptr_liste Animalerie);
extern void print_animaux(ptr_liste Animalerie);
extern int main(int argv, char * argc[]);

extern void ajouter(ptr_Animal animal, ptr_liste maliste);
extern ptr_liste creer_liste(ptr_Animal animal);
extern void afficher (ptr_liste maliste);
extern void supprimer(ptr_Animal animal, ptr_liste maliste);

#endif
