#include<stdlib.h>
#include<errno.h>
#include<assert.h>
#include<stdbool.h>
#include"ListeChainee.h"

 
ListeChainee listeChainee(){
    errno = 0;
    return NULL;
}

bool LC_estVide(ListeChainee liste){
    return(liste == NULL);
}

void LC_ajouter(ListeChainee* pliste, void* element,EC_FonctionCopierDansCollection copierElement){
    ListeChainee pNoeud = (ListeChainee)malloc(sizeof(Noeud));
    void* donnee = copierElement(element);
    if ((pNoeud!=NULL) || (donnee!=NULL)) {
        errno = 0;
        pNoeud->element = element;
        pNoeud->listeSuivante = *pliste;
        *pliste = *pNoeud
    }
    else{
        errno = ERREUR_MEMOIRE;
    }
}

void * LC_obtenirElement(ListeChainee liste) {
    return (void *)liste->element;
}

ListeChainee LC_obtenirListeSuivante(ListeChainee liste){
    assert(!estVide(liste));
    return liste -> listeSuivante;
}

void LC_fixerListeSuivante(ListeChainee liste1, ListeChainee liste2){
    assert(!estVide(liste1));
    liste1 -> listeSuivante  = liste2;
    return liste1;
}

void LC_supprimerTete(ListeChainee* pliste, EC_FonctionLibererDeCollection liberer){
    ListeChainee liste2 = obtenirListeSuivante(*pliste);
    fixerListeSuivante(*pliste, liste2);
    liberer(pliste);
}

void LC_supprimer(ListeChainee* pliste, EC_FonctionLibererDeCollection liberer){
    assert(!estVide(*pliste));
    do
    {
        ListeChainee temp = obtenirListeSuivante(*pliste);
        liberer(pliste);
        pliste = &temp;
    } while (!estVide(*pliste));
}

ListeChainee LC_copier(ListeChainee liste,EC_FonctionCopierDansCollection copier) {
    ListeChainee resultat = listeChainee();
    do
    {   ListeChainee temp = resultat;
        temp->element = copier(liste->element);
        temp->listeSuivante = liste->listeSuivante;
        liste = obtenirListeSuivante(liste);
        temp = obtenirListeSuivante(temp);
    } while (!estvide(liste));
    return resultat;
}

int LC_egales(ListeChainee liste1, ListeChainee liste2 ,EC_FonctionComparaison comparer) {
    bool resultat = true;
    do
    {
        if(!comparer(liste1->element, liste2->element)){
            resultat = false;
        }
        liste1 = obtenirListeSuivante(liste1);
        liste2 = obtenirListeSuivante(liste2);
    } while (!estVide(liste1) && !estvide(liste2) && (resultat));
    return resultat;
}