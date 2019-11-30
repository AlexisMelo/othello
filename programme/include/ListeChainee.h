#ifndef LISTE CHAINEE
#define LISTE CHAINEE
#include<errno.h>
#include"elementCollection.h"


typedef Noeud * ListeChainee;

typedef struct
{
    void * element;
    ListeChainee listeSuivante;
} Noeud;


#define ERREUR_MEMOIRE 1

ListeChainee listeChainee () ;
bool estVide(ListeChainee);
void ajouter(ListeChainee*,void*,EC_FonctionCopierDansCollection);
void * obtenirElement(ListeChainee);
ListeChainee  obtenirListeSuivante (ListeChainee) ;
void fixerListeSuivante(ListeChainee, ListeChainee) ;
void fixerElement(ListeChainee*,void*, EC_FonctionCopierDansCollection,EC_FonctionLibererDeCollection) ;
void supprimerTete(ListeChainee*, EC_FonctionLibererDeCollection) ;
void supprimer(ListeChainee*, EC_FonctionLibererDeCollection) ;
ListeChainee copier(ListeChainee,EC_FonctionCopierDansCollection);
int egales(ListeChainee, ListeChainee,EC_FonctionComparaison);
#endif