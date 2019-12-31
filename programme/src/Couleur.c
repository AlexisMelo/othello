#include<stdbool.h>
#include<assert.h>
#include"../include/Couleur.h"
#include<stdlib.h>
#include<string.h>




Couleur * CouleurNulle() {
    Couleur * presultat = malloc(sizeof(Couleur));
    presultat->nom = nulle;
    presultat->hexa = malloc(sizeof(presultat->hexa)*3);
    strcpy(presultat->hexa,"11");
    presultat->symbole = '.';
    return presultat;
}

Couleur CouleurBlanc() {
    Couleur resultat = *CouleurNulle();
    resultat.nom = Blanc;
    strcpy(resultat.hexa, "00");
    resultat.symbole = 'O';
    return resultat;
}

Couleur CouleurNoir() {
    Couleur resultat = *CouleurNulle();
    resultat.nom = Noir;
    strcpy(resultat.hexa, "FF");
    resultat.symbole = 'X';
    return resultat;
}


Couleur CouleurNeutre() {
    Couleur resultat = *CouleurNulle();
    resultat.nom = Vide;
    strcpy(resultat.hexa, "01");
    resultat.symbole = ' ';
    return resultat;
}

Couleur obtenirCouleuropposee(Couleur couleur) {
    assert(!estNeutre(couleur));
    if (couleur.nom == Blanc){
        couleur.nom=Noir;
        strcpy(couleur.hexa,"FF");
        couleur.symbole='X';
        return couleur;
    }
    if (couleur.nom == Noir){
        couleur.nom=Blanc;
        strcpy(couleur.hexa,"00");
        couleur.symbole='O';
        return couleur;
    }
    return CouleurNeutre();
}    


bool estNeutre(Couleur couleur) {
    return ((couleur.nom == CouleurNeutre().nom) && (couleur.hexa == CouleurNeutre().hexa) && (couleur.symbole == CouleurNeutre().symbole));
}


bool estEgalCouleur(Couleur couleur1, Couleur couleur2) {
    return (((strcmp(couleur1.hexa, couleur2.hexa) == 0) && couleur1.nom == couleur2.nom && couleur1.symbole == couleur2.symbole));
}