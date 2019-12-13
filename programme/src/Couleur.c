#include<stdbool.h>;
#include<assert.h>;
#include"Couleur.h";
#include<stdlib.h>;




Couleur CouleurNulle() {
    Couleur resultat;
    resultat.nom = NULL;
    resultat.hexa = NULL;
    resultat.symbole = NULL;
    resultat.couleurOpposee = NULL;
    return resultat;
}

Couleur CouleurBlanc() {
    Couleur resultat = CouleurNulle();
    resultat.nom = Blanc;
    resultat.hexa = "00";
    resultat.symbole = "0";
    resultat.couleurOpposee = CouleurNoir();
    return resultat;
}

Couleur CouleurNoir() {
    Couleur resultat = CouleurNulle();
    resultat.nom = Noir;
    resultat.hexa[2] = "FF";
    resultat.symbole = "X";
    resultat.couleurOpposee = CouleurBlanc();
    return resultat;
}


Couleur CouleurNeutre() {
    Couleur resultat = CouleurNulle();
    resultat.nom = Vide;
    resultat.hexa[2] = "01";
    resultat.symbole = " ";
    return resultat;
}

Couleur obtenirCouleuropposee(Couleur couleur) {
    assert(!estNeutre(couleur));
    return couleur.couleurOpposee;
}

bool estNeutre(Couleur couleur) {
    return (couleur.nom == CouleurNeutre().nom) && (couleur.hexa == CouleurNeutre().hexa) && (couleur.symbole == CouleurNeutre().symbole);
}

bool estEgalCouleur(Couleur couleur1, Couleur couleur2) {
    return (couleur1.hexa == couleur2.hexa && couleur1.nom == couleur2.nom && couleur1.symbole == couleur2.symbole);
};