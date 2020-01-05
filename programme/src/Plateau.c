#include "Plateau.h"

void PLATEAU_InitialiserPlateau(Couleur * plateau){
  Couleur neutre, blanc, noir;
  neutre=COULEUR_ObtenirCouleurNeutre();
  blanc=COULEUR_ObtenirCouleurBlanc();
  noir=COULEUR_ObtenirCouleurNoir();

  //Couleur Plateau[64] = {{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},};
  //memcpy(pPlateau, &Plateau,TAILLE*TAILLE*sizeof(Couleur));

  //initialisation de toutes les cases du plateau avec une couleur neutre
  for (int i=1;i<=PLATEAU_ObtenirTaille(plateau);i++){
    for (int j=1;j<=PLATEAU_ObtenirTaille(plateau);j++){
      PLATEAU_JouerCoup(plateau,COUP_CreerCoup(POSITION_CreerPosition(LIGNE_ObtenirLigneDepuisInt(i),COLONNE_ObtenirColonneDepuisInt(j)),neutre));
    }
  }

  //initialisation des 4 premiers coups
  PLATEAU_JouerCoup(plateau,COUP_CreerCoup(POSITION_CreerPosition(LIGNE_ObtenirLigneDepuisInt(PLATEAU_ObtenirTaille(plateau)/2),  COLONNE_ObtenirColonneDepuisInt(PLATEAU_ObtenirTaille(plateau)/2)), blanc));
  PLATEAU_JouerCoup(plateau,COUP_CreerCoup(POSITION_CreerPosition(LIGNE_ObtenirLigneDepuisInt(PLATEAU_ObtenirTaille(plateau)/2+1),COLONNE_ObtenirColonneDepuisInt(PLATEAU_ObtenirTaille(plateau)/2+1)), blanc));
  PLATEAU_JouerCoup(plateau,COUP_CreerCoup(POSITION_CreerPosition(LIGNE_ObtenirLigneDepuisInt(PLATEAU_ObtenirTaille(plateau)/2),  COLONNE_ObtenirColonneDepuisInt(PLATEAU_ObtenirTaille(plateau)/2+1)), noir));
  PLATEAU_JouerCoup(plateau,COUP_CreerCoup(POSITION_CreerPosition(LIGNE_ObtenirLigneDepuisInt(PLATEAU_ObtenirTaille(plateau)/2+1),COLONNE_ObtenirColonneDepuisInt(PLATEAU_ObtenirTaille(plateau)/2)), noir));
}

Couleur * PLATEAU_CreerPlateau() {
    Couleur * plateau = malloc(TAILLE*TAILLE*sizeof(Couleur));
    return plateau;
    //return(Couleur(*)[64])malloc(TAILLE*TAILLE*sizeof(Couleur));
}

void PLATEAU_JouerCoup(Couleur * plateau, Coup coup) {
  Position positionDuCoup = COUP_ObtenirPosition(coup);
  int ligneDuCoup = LIGNE_ObtenirNumeroLigne(POSITION_ObtenirLigne(positionDuCoup));
  int colonneDuCoup = COLONNE_ObtenirNumeroColonne(POSITION_ObtenirColonne(positionDuCoup));
  Couleur coul = COUP_ObtenirCouleur(coup);
  plateau[(ligneDuCoup-1)*PLATEAU_ObtenirTaille(plateau) + (colonneDuCoup-1)] = coul;
}

Couleur PLATEAU_ObtenirCouleurAvecPosition(Couleur * plateau, Position position) {
    int ligneDeLaPosition = COLONNE_ObtenirNumeroColonne(POSITION_ObtenirLigne(position));
    int colonneDeLaPosition = COLONNE_ObtenirNumeroColonne(POSITION_ObtenirColonne(position));
    return plateau[(ligneDeLaPosition-1)*TAILLE + (colonneDeLaPosition-1)];//plateau[colonneDeLaPosition][ligneDeLaPosition];
}

bool PLATEAU_EstPositionLibre(Couleur * plateau, Position position) {
    Couleur couleurDeLaCase = PLATEAU_ObtenirCouleurAvecPosition(plateau, position);
    return COULEUR_SontEgalesCouleurs(couleurDeLaCase,COULEUR_ObtenirCouleurNeutre());
}

int PLATEAU_ObtenirTaille(Couleur * plateau) {
    return TAILLE;
}

bool PLATEAU_EstRempli(Couleur * plateau) {
  for (int i=1; i<=PLATEAU_ObtenirTaille(plateau); i++){
      for (int j=1; j<=PLATEAU_ObtenirTaille(plateau); j++){
          if (PLATEAU_EstPositionLibre(plateau, POSITION_CreerPosition(i,j))) {
            return false;
          }
      }
  }
  return true;
}

int PLATEAU_CalculerPoints(Couleur * p, Couleur couleur){
  int points=0;
  int i, j;
  for(i=1;i<=PLATEAU_ObtenirTaille(p);i++){
    for(j=1;j<=PLATEAU_ObtenirTaille(p);j++){
      if(COULEUR_SontEgalesCouleurs(couleur,PLATEAU_ObtenirCouleurAvecPosition(p,POSITION_CreerPosition(LIGNE_ObtenirLigneDepuisInt(i),COLONNE_ObtenirColonneDepuisInt(j))))){
	    points=points+1;
      }
    }
  }
  return points;
}

void PLATEAU_CapturerPions(Couleur * plateau, Coup coup){

  PLATEAU_CapturerPionsDansDirection(plateau, coup, H);
  PLATEAU_CapturerPionsDansDirection(plateau, coup, HD);
  PLATEAU_CapturerPionsDansDirection(plateau, coup, D);
  PLATEAU_CapturerPionsDansDirection(plateau, coup, BD);
  PLATEAU_CapturerPionsDansDirection(plateau, coup, B);
  PLATEAU_CapturerPionsDansDirection(plateau, coup, BG);
  PLATEAU_CapturerPionsDansDirection(plateau, coup, G);
  PLATEAU_CapturerPionsDansDirection(plateau, coup, HG);

}

void PLATEAU_CapturerPionsDansDirection(Couleur * plateau, Coup coup, Direction direction) {
  Position nouvellePosition;
  Coup nouveauCoup;

  if(RECHERCHEDIRECTIONS_CoupPossibleDansDirection(plateau, coup, direction)){
      nouvellePosition = POSITION_AppliquerDirection(COUP_ObtenirPosition(coup), direction);
      while((PLATEAU_EstPositionValide(plateau, nouvellePosition)) && (!COULEUR_SontEgalesCouleurs(COUP_ObtenirCouleur(coup), PLATEAU_ObtenirCouleurAvecPosition(plateau, nouvellePosition)))){
          nouveauCoup = COUP_CreerCoup(nouvellePosition ,COUP_ObtenirCouleur(coup));
          PLATEAU_JouerCoup(plateau,nouveauCoup);
          nouvellePosition = POSITION_AppliquerDirection(COUP_ObtenirPosition(nouveauCoup), direction);
      };
  };
}

bool PLATEAU_EstPositionValide(Couleur * plateau, Position position) {
    Colonne colonne = POSITION_ObtenirColonne(position);
    Ligne ligne = POSITION_ObtenirLigne(position);
    return (COLONNE_ObtenirNumeroColonne(colonne) <= PLATEAU_ObtenirTaille(plateau)) && (LIGNE_ObtenirNumeroLigne(ligne) <= PLATEAU_ObtenirTaille(plateau)) && (COLONNE_ObtenirNumeroColonne(colonne) >= 1) && (LIGNE_ObtenirNumeroLigne(ligne) >= 1);
}
