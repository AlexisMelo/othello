#include "../include/CoupCollection.h"

void* COUPCOLLECTION_FonctionCopierCoup(void* coup) {
    Coup * resultat = (Coup*)malloc(sizeof(Coup));
    memcpy((void*)resultat, coup, sizeof(Coup));
    return (void*)resultat;
}

void COUPCOLLECTION_FonctionLibererCoup(void * coup) {
    free(coup);
}

bool COUPCOLLECTION_FonctionComparerCoup(void * coup1, void * coup2) {
    return COUP_EstEgalCoup(*(Coup*)coup1, *(Coup*)coup2);
}
