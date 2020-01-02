#include<stdlib.h>
#include<errno.h>
#include<assert.h>
#include<stdbool.h>
#include"ListeChainee.h"
#include"CoupCollection.h"

 
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
<<<<<<< HEAD
    if ((pNoeud!=NULL) || (element!=NULL)) {
=======
    Coup* donnee = copierElement(element);
    if ((pNoeud!=NULL) || (donnee!=NULL)) {
>>>>>>> ce0d436729dc23cfa530bd2b88cc21623e88cd43
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
<<<<<<< HEAD
    return liste->element;
=======
    return (void *)liste->element;
>>>>>>> ce0d436729dc23cfa530bd2b88cc21623e88cd43
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
<<<<<<< HEAD
    liberer(*pliste);
    pliste = &liste2;
=======
    LC_fixerListeSuivante(pliste, liste2);
    liberer(pliste);
>>>>>>> ce0d436729dc23cfa530bd2b88cc21623e88cd43
}

void LC_supprimer(ListeChainee* pliste, EC_FonctionLibererDeCollection liberer){
    assert(!LC_estVide(*pliste));
    do
    {
        ListeChainee temp = LC_obtenirListeSuivante(*pliste);
<<<<<<< HEAD
        liberer(*pliste);
=======
        liberer(pliste);
>>>>>>> ce0d436729dc23cfa530bd2b88cc21623e88cd43
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
