#include<stdbool.h>
#include<assert.h>
#include"../include/Couleur.h"
#include<stdlib.h>
#include<string.h>




Couleur * CouleurNulle() {
    Couleur * resultat = malloc(sizeof(Couleur));
    resultat->nom = nulle;/* 
    strcpy(resultat->hexa, malloc(sizeof(resultat->hexa)));
    strcpy(resultat->hexa,"11"); */
    resultat->symbole = '.';
    return resultat;
}

Couleur CouleurBlanc() {
    Couleur resultat = *CouleurNulle();
    resultat.nom = Blanc;/* 
    strcpy(resultat.hexa, "00"); */
    resultat.symbole = 'O';
    return resultat;
}

Couleur CouleurNoir() {
    Couleur resultat = *CouleurNulle();
    resultat.nom = Noir;/* 
    strcpy(resultat.hexa, "FF"); */
    resultat.symbole = 'O';
    return resultat;
}


Couleur CouleurNeutre() {
    Couleur resultat = *CouleurNulle();
    resultat.nom = Vide;/* 
    strcpy(resultat.hexa, "01"); */
    resultat.symbole = ' ';
    return resultat;
}

Couleur ObtenirCouleuropposee(Couleur couleur) {
    assert(!EstNeutre(couleur));
    if (couleur.nom == Blanc){
        couleur.nom=Noir;/* 
        strcpy(couleur.hexa,"FF"); */
        couleur.symbole='0';
        return couleur;
    }
    if (couleur.nom == Noir){
        couleur.nom=Blanc;/* 
        strcpy(couleur.hexa,"00"); */
        couleur.symbole='O';
        return couleur;
    }
    return CouleurNeutre();
}    


bool EstNeutre(Couleur couleur) {
    return ((couleur.nom == CouleurNeutre().nom) && couleur.symbole == CouleurNeutre().symbole);
}


bool EstEgalCouleur(Couleur couleur1, Couleur couleur2) {
    return ((couleur1.nom == couleur2.nom && couleur1.symbole == couleur2.symbole));
}