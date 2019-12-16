#include<stdbool.h>
#include<assert.h>
#include"../include/Couleur.h"
#include<stdlib.h>
#include<string.h>




Couleur CouleurNulle() {
    Couleur resultat;
    resultat.nom = nulle;
    strcpy(resultat.hexa,"11");
    resultat.symbole = '.';
    return resultat;
}

Couleur CouleurBlanc() {
    Couleur resultat = CouleurNulle();
    resultat.nom = Blanc;
    strcpy(resultat.hexa, "00");
    resultat.symbole = 'O';
    return resultat;
}

Couleur CouleurNoir() {
    Couleur resultat = CouleurNulle();
    resultat.nom = Noir;
    strcpy(resultat.hexa, "FF");
    resultat.symbole = 'X';
    return resultat;
}


Couleur CouleurNeutre() {
    Couleur resultat = CouleurNulle();
    resultat.nom = Vide;
    strcpy(resultat.hexa, "01");
    resultat.symbole = ' ';
    return resultat;
}

Couleur obtenirCouleuropposee(Couleur couleur) {
    assert(!estNeutre(couleur));
    if (couleur.nom == Blanc){
        return CouleurNoir();
    }
    if (couleur.nom == Noir){
        return CouleurBlanc();
    }
}    


bool estNeutre(Couleur couleur) {
    return ((couleur.nom == CouleurNeutre().nom) && (couleur.hexa == CouleurNeutre().hexa) && (couleur.symbole == CouleurNeutre().symbole));
}


bool estEgalCouleur(Couleur couleur1, Couleur couleur2) {
    return ((couleur1.hexa == couleur2.hexa && couleur1.nom == couleur2.nom && couleur1.symbole == couleur2.symbole));
}