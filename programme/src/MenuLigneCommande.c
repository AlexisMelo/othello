#include "../include/MenuLigneCommande.h"

void MenuLigneCommande(int nbArguments, char ** arguments) {

  Joueur j1;
  Joueur j2;

  Couleur couleurJ1 = COULEUR_ObtenirCouleurDepuisString(MENU_ObtenirStringCouleurPremierJoueurDepuisArguments(arguments));
  Couleur couleurJ2 = COULEUR_ObtenirCouleurOpposee(couleurJ1);

  int profondeurIA = MENU_ObtenirProfondeurIADepuisArguments(nbArguments, arguments);

  if (strcmp(arguments[1], JOUEURVSJOUEUR) == 0) {

    j1 = JOUEUR_CreerJoueurHumain(couleurJ1);
    j2 = JOUEUR_CreerJoueurHumain(couleurJ2);

    PARTIE_FaireUnePartie(AFFICHAGE_AfficherResultatsPartie, AFFICHAGE_AfficherPlateau, j1, j2);
  }
  else if (strcmp(arguments[1], JOUEURVSIA) == 0) {

    j1 = JOUEUR_CreerJoueurHumain(couleurJ1);
    j2 = JOUEUR_CreerJoueurIA(couleurJ2, profondeurIA);

    PARTIE_FaireUnePartie(AFFICHAGE_AfficherResultatsPartie, AFFICHAGE_AfficherPlateau, j1, j2);

  }
  else if (strcmp(arguments[1], IAVSIA) == 0) {

    j1 = JOUEUR_CreerJoueurIA(couleurJ1, profondeurIA);
    j2 = JOUEUR_CreerJoueurIA(couleurJ2, profondeurIA);

    PARTIE_FaireUnePartie(AFFICHAGE_AfficherResultatsPartieTournois, AFFICHAGE_AfficherPlateauTournois, j1, j2);

  }
  else {
    MessageDAide();
  }
}
