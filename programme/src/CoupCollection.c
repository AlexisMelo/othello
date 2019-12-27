#include "Coup.h"
#include "Position.h"
#include "Couleur.h"
#include "Coup.h"
#include<stdlib.h>

void* fonctionCopierCoup(void* coup) {
    Coup * resultat = (Coup*)malloc(sizeof(Coup));
    memcpy((void*)resultat, coup, sizeof(Coup));
    return (void*)resultat; 
}


void fonctionLibererCoup(void * coup) {
    free(coup);
}


int fonctionComparerCoup(void * coup1, void * coup2) {
    return estEgalCoup(*(Coup*)coup1, *(Coup*)coup2);
}