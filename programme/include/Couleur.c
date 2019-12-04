#include<stdbool.h>;
#include<assert.h>;
#include"Couleur.h";
#include<stdlib.h>;

Couleur CouleurNulle() {
    Couleur resultat;
    resultat.nom = NULL;
    resultat.hexa[2] = NULL;
    resultat.symbole = NULL;
    return resultat;
}

Couleur CouleurBlanc() {
    Couleur resultat = CouleurNulle();
    resultat.nom = Blanc;
    resultat.hexa[2] = '00';
    resultat.symbole = '0';
    return resultat;
}

Couleur CouleurNoir() {
    Couleur resultat = CouleurNulle();
    resultat.nom = Noir;
    resultat.hexa[2] = 'FF';
    resultat.symbole = 'X';
    return resultat;
}


Couleur CouleurNeutre() {
    Couleur resultat = CouleurNulle();
    resultat.nom = Vide;
    resultat.hexa[2] = '01';
    resultat.symbole = ' ';
    return resultat;
}

Couleur obtenirCouleuropposee(Couleur couleur) {
    assert(!estNeutre(couleur));
    switch (couleur.nom)
    {
    case Blanc:
        return CouleurNoir();
    case Noir:
        return CouleurBlanc();
    default:
        return CouleurNeutre();
    }
}

bool estNeutre(Couleur couleur) {
    return (couleur.nom == CouleurNeutre().nom) && (couleur.hexa == CouleurNeutre().hexa) && (couleur.symbole == CouleurNeutre().symbole);
}