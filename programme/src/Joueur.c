#include "../include/Joueur.h"

Joueur JOUEUR_CreerJoueurHumain(Couleur couleur) {
  Joueur resultat;
  resultat.profondeur = 0;
  resultat.estIA = false;
  resultat.couleur = couleur;
  return resultat;
}

Joueur JOUEUR_CreerJoueurIA(Couleur couleur, int profondeur) {
  Joueur resultat;;
  resultat.profondeur = profondeur;
  resultat.estIA = true;
  resultat.couleur = couleur;
  return resultat;
}

Coup JOUEUR_SaisirCoupHumain(Joueur j) {
    char * entree;
    entree = (char*)malloc(5*sizeof(char));
    printf("A quelle position voulez vous jouer ?");
    scanf("%s", entree);
    int ligneNombre = strtol(&entree[0], NULL, 10);
    char colonneLettre = entree[1];
    printf("%d ewtb", ligneNombre);
    //printf("%d %d %d", JOUEUR_ObtenirCouleur(j).nom, COLONNE_ObtenirColonneDepuisChar(colonneLettre), LIGNE_ObtenirLigneDepuisInt(ligneNombre));
  return COUP_CreerCoup(POSITION_CreerPosition(COLONNE_ObtenirColonneDepuisChar(colonneLettre), LIGNE_ObtenirLigneDepuisInt(ligneNombre)),JOUEUR_ObtenirCouleur(j));
}

Coup JOUEUR_SaisirCoupIA(Joueur j, Couleur * plateau) {
  printf("unimplemented");
  return COUP_CreerCoup(POSITION_CreerPosition(0,0),JOUEUR_ObtenirCouleur(j));
}

Coup JOUEUR_ObtenirCoup(Joueur j, Couleur * plateau) {
  if (JOUEUR_EstIA(j)) {
    return JOUEUR_SaisirCoupIA(j,plateau);
  }
  return JOUEUR_SaisirCoupHumain(j);
}

Couleur JOUEUR_ObtenirCouleur(Joueur j) {
  return j.couleur;
}

bool JOUEUR_EstIA(Joueur j) {
  return j.estIA;
}

int JOUEUR_ObtenirProfondeur(Joueur j) {
  return j.profondeur;
}
