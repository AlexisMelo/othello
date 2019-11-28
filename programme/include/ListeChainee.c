#include<stdlib.h>
#include<errno.h>
#include<assert.h>
#include<stdbool.h>
#include"ListeChainee.h";
ListeChainee listeVide(){
    errno = 0;
    return NULL;
}

bool estVide(ListeChainee liste){
    return(liste == NULL);
}

ListeChainee obtenirListeSuivante(ListeChainee liste){
    assert(!estVide(liste));
    return liste -> listeSuivante;
}

void fixerListeSuivante(ListeChainee liste1, ListeChainee liste2){
    assert(!estVide(liste1));
    liste1 -> listeSuivante  = liste2;
    return liste1;
}

void ajouter(ListeChainee* liste,void* element,EC_FonctionCopierDansCollection copier){
    Noeud new;
    new.element = element;
    new.listeSuivante = liste;
    return new*;
}