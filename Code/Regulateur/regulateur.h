#include "../Menu/menu.h"
#include "../Jeu/jeu.h"

typedef struct
{
    void (*t1)(Donnees *);
    void (*t2)(Donnees *);
    void (*t3)(Donnees *);
    void (*t4)(Donnees *);
    void (*t5)(Donnees *);
    void (*t6)(Donnees *);
} Choix;

void choix(Donnees *donnees, Choix type);
Choix tAffichage();
Choix tClique();