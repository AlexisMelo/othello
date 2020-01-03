#include<stdlib.h>
#include<errno.h>
#include<assert.h>
#include<stdbool.h>
#include"../include/ListeChainee.h"


ListeChainee listeChainee(){
    errno = 0;
    Noeud* pNoeud = (Noeud*)malloc(sizeof(Noeud));
    pNoeud->element = NULL;
    pNoeud->listeSuivante = NULL;
    return pNoeud;
}

bool LC_estVide(ListeChainee liste){
    return(liste->element == NULL);
}

void LC_ajouter(ListeChainee* pliste, Coup* element,EC_FonctionCopierDansCollection copierElement){
    ListeChainee pNoeud = (ListeChainee)malloc(sizeof(Noeud));
    if ((pNoeud!=NULL) || (element!=NULL)) {
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
    return liste->element;
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
    liberer(*pliste);
    pliste = &liste2;
}

void LC_supprimer(ListeChainee* pliste, EC_FonctionLibererDeCollection liberer){
    assert(!LC_estVide(*pliste));
    do
    {
        ListeChainee temp = LC_obtenirListeSuivante(*pliste);
        liberer(*pliste);
        pliste = &temp;
    } while (!LC_estVide(*pliste));
}

ListeChainee LC_copier(ListeChainee liste,EC_FonctionCopierDansCollection copier) {
    ListeChainee resultat = listeChainee();
    do
    {   ListeChainee temp = resultat;
        temp = copier(liste);
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
        if(!comparer(liste1, liste2)){
            resultat = false;
        }
        liste1 = LC_obtenirListeSuivante(liste1);
        liste2 = LC_obtenirListeSuivante(liste2);
    } while (!LC_estVide(liste1) && !LC_estVide(liste2) && (resultat));
    return resultat;
}
