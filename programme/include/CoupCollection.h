#ifndef COUP_COLLECTION
#define COUP_COLLECTION

#include <stdlib.h>

#include "Coup.h"

void* COUPCOLLECTION_FonctionCopierCoup(void* coup);

void COUPCOLLECTION_FonctionLibererCoup(void* coup);

bool COUPCOLLECTION_FonctionComparerCoup(void * coup1, void * coup2);

#endif
