#include "../include/MenuLigneCommande.h"

void MenuLigneCommande(int nbArguments, char ** arguments) {

  Joueur j1;
  Joueur j2;

  Couleur couleurJ1 = ObtenirCouleurDepuisString(ObtenirStringCouleurPremierJoueurDepuisArguments(arguments));
  Couleur couleurJ2 = COULEUR_ObtenirCouleurOpposee(couleurJ1);

  int profondeurIA = ObtenirProfondeurIADepuisArguments(nbArguments, arguments);

  if (strcmp(arguments[1], JOUEURVSJOUEUR) == 0) {

    j1 = JOUEUR_CreerJoueurHumain(couleurJ1);
    j2 = JOUEUR_CreerJoueurHumain(couleurJ2);

    printf("Jouer partie Joueur vs Joueur avec profondeur %d\n", ObtenirProfondeurIADepuisArguments(nbArguments,arguments));

  }
  else if (strcmp(arguments[1], JOUEURVSIA) == 0) {

    j1 = JOUEUR_CreerJoueurHumain(couleurJ1);
    j2 = JOUEUR_CreerJoueurIA(couleurJ2, profondeurIA);

    printf("Jouer partie Joueur vs IA avec profondeur %d\n", ObtenirProfondeurIADepuisArguments(nbArguments,arguments)); //remplacer avec fairePartie
  }
  else if (strcmp(arguments[1], IAVSIA) == 0) {

    j1 = JOUEUR_CreerJoueurIA(couleurJ1, profondeurIA);
    j2 = JOUEUR_CreerJoueurIA(couleurJ2, profondeurIA);

    printf("Jouer partie IA vs IA avec profondeur %d\n", ObtenirProfondeurIADepuisArguments(nbArguments,arguments)); //remplacer avec fairePartie
  }
  else {
    MessageDAide();
  }
}
