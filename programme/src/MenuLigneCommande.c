#include "MenuLigneCommande.h"

void MENU_LC_MenuLigneCommande(int nbArguments, char ** arguments) {

  Joueur j1;
  Joueur j2;

  Couleur couleurJ1 = COULEUR_ObtenirCouleurDepuisString(MENU_ObtenirStringCouleurPremierJoueurDepuisArguments(arguments));
  Couleur couleurJ2 = COULEUR_ObtenirCouleurOpposee(couleurJ1);

  int profondeurIA = MENU_ObtenirProfondeurIADepuisArguments(nbArguments, arguments);

  if (strcmp(arguments[1], JOUEURVSJOUEUR) == 0) {

    j1 = JOUEUR_CreerJoueurHumain(couleurJ1);
    j2 = JOUEUR_CreerJoueurHumain(couleurJ2);

    printf("Jouer partie Joueur vs Joueur avec profondeur %d\n", MENU_ObtenirProfondeurIADepuisArguments(nbArguments,arguments));

    PARTIE_FaireUnePartie(AFFICHAGE_AfficherResultatsPartie, AFFICHAGE_AfficherPlateau, AFFICHAGE_AfficherCoupJoue, j1, j2);
  }
  else if (strcmp(arguments[1], JOUEURVSIA) == 0) {

    j1 = JOUEUR_CreerJoueurHumain(couleurJ1);
    j2 = JOUEUR_CreerJoueurIA(couleurJ2, profondeurIA);

    printf("Jouer partie Joueur vs IA avec profondeur %d\n", MENU_ObtenirProfondeurIADepuisArguments(nbArguments,arguments)); //remplacer avec fairePartie

    PARTIE_FaireUnePartie(AFFICHAGE_AfficherResultatsPartie, AFFICHAGE_AfficherPlateau, AFFICHAGE_AfficherCoupJoue, j1, j2);

  }
  else if (strcmp(arguments[1], IAVSIA) == 0) {

    j1 = JOUEUR_CreerJoueurIA(couleurJ1, profondeurIA);
    j2 = JOUEUR_CreerJoueurHumain(couleurJ2);

    printf("Jouer partie IA vs IA avec profondeur %d\n", MENU_ObtenirProfondeurIADepuisArguments(nbArguments,arguments)); //remplacer avec fairePartie

    PARTIE_FaireUnePartie(AFFICHAGE_AfficherResultatsPartieTournois, AFFICHAGE_AfficherPlateauTournois, AFFICHAGE_AfficherCoupJoue, j1, j2);

  }
  else {
    AFFICHAGE_MessageAide();
  }
}
