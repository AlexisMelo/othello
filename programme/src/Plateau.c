#include "Plateau.h"

void PLATEAU_InitialiserPlateau(Couleur * p){
  Couleur neutre, blanc, noir;
  neutre=COULEUR_ObtenirCouleurNeutre();
  blanc=COULEUR_ObtenirCouleurBlanc();
  noir=COULEUR_ObtenirCouleurNoir();

  //initialisation de toutes les cases du plateau avec une couleur neutre
  for (int i=1;i<=PLATEAU_ObtenirTaille(p);i++){
    for (int j=1;j<=PLATEAU_ObtenirTaille(p);j++){
      PLATEAU_JouerCoup(p,COUP_CreerCoup(POSITION_CreerPosition(LIGNE_ObtenirLigneDepuisInt(i),COLONNE_ObtenirColonneDepuisInt(j)),neutre));
    }
  }

  //initialisation des 4 premiers coups
  PLATEAU_JouerCoup(p,COUP_CreerCoup(POSITION_CreerPosition(LIGNE_ObtenirLigneDepuisInt(PLATEAU_ObtenirTaille(p)/2),  COLONNE_ObtenirColonneDepuisInt(PLATEAU_ObtenirTaille(p)/2)), blanc));
  PLATEAU_JouerCoup(p,COUP_CreerCoup(POSITION_CreerPosition(LIGNE_ObtenirLigneDepuisInt(PLATEAU_ObtenirTaille(p)/2+1),COLONNE_ObtenirColonneDepuisInt(PLATEAU_ObtenirTaille(p)/2+1)), blanc));
  PLATEAU_JouerCoup(p,COUP_CreerCoup(POSITION_CreerPosition(LIGNE_ObtenirLigneDepuisInt(PLATEAU_ObtenirTaille(p)/2),  COLONNE_ObtenirColonneDepuisInt(PLATEAU_ObtenirTaille(p)/2+1)), noir));
  PLATEAU_JouerCoup(p,COUP_CreerCoup(POSITION_CreerPosition(LIGNE_ObtenirLigneDepuisInt(PLATEAU_ObtenirTaille(p)/2+1),COLONNE_ObtenirColonneDepuisInt(PLATEAU_ObtenirTaille(p)/2)), noir));
}

Couleur * PLATEAU_CreerPlateau() {
  return (Couleur*)malloc(TAILLE*TAILLE*sizeof(Couleur*));
}

Couleur * PLATEAU_JouerCoup(Couleur * plateau, Coup coup) {
  Position positionDuCoup = COUP_ObtenirPosition(coup);
  int ligneDuCoup = LIGNE_ObtenirNumeroLigne(POSITION_ObtenirLigne(positionDuCoup));
  int colonneDuCoup = COLONNE_ObtenirNumeroColonne(POSITION_ObtenirColonne(positionDuCoup));
  Couleur coul = COUP_ObtenirCouleur(coup);
  plateau[(ligneDuCoup-1)*PLATEAU_ObtenirTaille(plateau) + (colonneDuCoup-1)] = coul;
  return plateau;
}

Couleur PLATEAU_ObtenirCouleurAvecPosition(Couleur * plateau, Position position) {
    int ligneDeLaPosition = ObtenirNumeroColonne(ObtenirLigne(position));
    int colonneDeLaPosition = ObtenirNumeroColonne(ObtenirColonne(position));
    return plateau[(ligneDeLaPosition-1)*TAILLE + (colonneDeLaPosition-1)];//plateau[colonneDeLaPosition][ligneDeLaPosition];
}

bool PLATEAU_EstPositionLibre(Couleur * plateau, Position position) {
    Couleur couleurDeLaCase = PLATEAU_ObtenirCouleurAvecPosition(plateau, position);
    return COULEUR_EstEgalCouleur(couleurDeLaCase,COULEUR_ObtenirCouleurNeutre());
}

int PLATEAU_ObtenirTaille(Couleur * plateau) {
    return TAILLE;
}
