#ifndef LISTE_CHAINEE
#define LISTE_CHAINEE
#include<errno.h>
#include "Coup.h"
struct _Noeud;

typedef struct _Noeud* ListeChainee;

typedef struct _Noeud
{
    Coup * element;
    ListeChainee listeSuivante;
} Noeud;

#include"elementCollection.h"
#define ERREUR_MEMOIRE 1

#include"CoupCollection.h"
#include"elementCollection.h"
ListeChainee listeChainee () ;
bool LC_estVide(ListeChainee);
void LC_ajouter(ListeChainee*,Coup*,EC_FonctionCopierDansCollection);
Coup * LC_obtenirElement(ListeChainee);
ListeChainee  LC_obtenirListeSuivante (ListeChainee) ;
void LC_fixerListeSuivante(ListeChainee *, ListeChainee) ;
void LC_fixerElement(ListeChainee*,void*, EC_FonctionCopierDansCollection,EC_FonctionLibererDeCollection) ;
void LC_supprimerTete(ListeChainee*, EC_FonctionLibererDeCollection) ;
void LC_supprimer(ListeChainee*, EC_FonctionLibererDeCollection) ;
ListeChainee copier(ListeChainee,EC_FonctionCopierDansCollection);
int LC_egales(ListeChainee, ListeChainee,EC_FonctionComparaison);
#endif
