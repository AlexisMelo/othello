#include"../include/Couleur.h"

Couleur * COULEUR_PointeurCouleurNulle() {
    Couleur * resultat = malloc(sizeof(Couleur));
    resultat->nom = Nulle;
    resultat->symbole = '.';
    return resultat;
}

Couleur COULEUR_ObtenirCouleurBlanc() {
    Couleur resultat = *COULEUR_PointeurCouleurNulle();
    resultat.nom = Blanc;
    resultat.symbole = 'O';
    return resultat;
}

Couleur COULEUR_ObtenirCouleurNoir() {
    Couleur resultat = *COULEUR_PointeurCouleurNulle();
    resultat.nom = Noir;
    resultat.symbole = 'X';
    return resultat;
}


Couleur COULEUR_ObtenirCouleurNeutre() {
    Couleur resultat = *COULEUR_PointeurCouleurNulle();
    resultat.nom = Neutre;
    resultat.symbole = ' ';
    return resultat;
}

Couleur COULEUR_ObtenirCouleurOpposee(Couleur couleur) {
    assert(!COULEUR_EstNeutre(couleur));

    if (couleur.nom == Blanc){
        return COULEUR_ObtenirCouleurNoir();
    }
    if (couleur.nom == Noir){
        return COULEUR_ObtenirCouleurBlanc();
    }
    return COULEUR_ObtenirCouleurNeutre();
}


bool COULEUR_EstNeutre(Couleur couleur) {
    return COULEUR_EstEgalCouleur(couleur, COULEUR_ObtenirCouleurNeutre());
}


bool COULEUR_EstEgalCouleur(Couleur couleur1, Couleur couleur2) {
    return (couleur1.nom == couleur2.nom) && (couleur1.symbole == couleur2.symbole);
}


Couleur COULEUR_ObtenirCouleurDepuisString(char * couleur) {
  if (strcmp(couleur, COULEUR_NOIRE)) {
    return COULEUR_ObtenirCouleurBlanc();
  }
  else if (strcmp(couleur, COULEUR_BLANCHE)) {
    return COULEUR_ObtenirCouleurNoir();
  }
  return COULEUR_ObtenirCouleurNeutre();
}

char COULEUR_ObtenirSymbole(Couleur couleur) {
  return couleur.symbole;
}