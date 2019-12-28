#include<stdlib.h>
#include<errno.h>
#include<assert.h>
#include<stdbool.h>
#include"ListeChainee.h"
#include"CoupCollection.h"

 
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
        *pliste = pNoeud;
    }
    else{
        errno = ERREUR_MEMOIRE;
    }
}

Coup * LC_obtenirElement(ListeChainee liste) {
    return (void *)liste->element;
}

ListeChainee LC_obtenirListeSuivante(ListeChainee liste){
    assert(!LC_estVide(liste));
    return liste->listeSuivante;
}

void LC_fixerListeSuivante(ListeChainee * liste1, ListeChainee liste2){
    assert(!LC_estVide(*liste1));
    (*liste1)->listeSuivante  = liste2;
}

void LC_supprimerTete(ListeChainee* pliste, EC_FonctionLibererDeCollection liberer){
    ListeChainee liste2 = LC_obtenirListeSuivante(*pliste);
    LC_fixerListeSuivante(pliste, liste2);
    liberer(pliste);
}

void LC_supprimer(ListeChainee* pliste, EC_FonctionLibererDeCollection liberer){
    assert(!LC_estVide(*pliste));
    do
    {
        ListeChainee temp = LC_obtenirListeSuivante(*pliste);
        liberer(pliste);
        pliste = &temp;
    } while (!LC_estVide(*pliste));
}

ListeChainee LC_copier(ListeChainee liste,EC_FonctionCopierDansCollection copier) {
    ListeChainee resultat = listeChainee();
    do
    {   ListeChainee temp = resultat;
        temp->element = copier(liste->element);
        temp->listeSuivante = liste->listeSuivante;
        liste = LC_obtenirListeSuivante(liste);
        temp = LC_obtenirListeSuivante(temp);
    } while (!LC_estVide(liste));
    return resultat;
}

int LC_egales(ListeChainee liste1, ListeChainee liste2 ,EC_FonctionComparaison comparer) {
    bool resultat = true;
    do
    {
        if(!comparer(liste1->element, liste2->element)){
            resultat = false;
        }
        liste1 = LC_obtenirListeSuivante(liste1);
        liste2 = LC_obtenirListeSuivante(liste2);
    } while (!LC_estVide(liste1) && !LC_estVide(liste2) && (resultat));
    return resultat;
}