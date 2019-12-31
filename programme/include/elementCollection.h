#ifndef ELEMENT_COLLECTION
#define ELEMENT_COLLECTION
#include"Coup.h"
#include"ListeChainee.h"
typedef Noeud* (*EC_FonctionCopierDansCollection) (Noeud*);
typedef void (*EC_FonctionLibererDeCollection) (Noeud*);
typedef int (*EC_FonctionComparaison) (Noeud*,Noeud*);
#endif