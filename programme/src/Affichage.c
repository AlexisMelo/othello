#include"../include/Affichage.h"

void P_AFFICHAGE_SetP_AFFICHAGE_TextColorToBlack(){
    printf("\033[0;30m");
}
void P_AFFICHAGE_SetP_AFFICHAGE_TextColorToWhite(){
    printf("\033[0;37m");
}
void P_AFFICHAGE_ResetP_AFFICHAGE_TextColor(){
    printf("\033[0m");
}


void P_AFFICHAGE_TextColor(Couleur couleur){
    if (COULEUR_SontEgalesCouleurs(couleur,COULEUR_ObtenirCouleurNoir())) {
      P_AFFICHAGE_SetP_AFFICHAGE_TextColorToBlack();
    }
    else if (COULEUR_SontEgalesCouleurs(couleur,COULEUR_ObtenirCouleurBlanc())) {
      P_AFFICHAGE_SetP_AFFICHAGE_TextColorToWhite();
    }
    else {
      P_AFFICHAGE_ResetP_AFFICHAGE_TextColor();
    }
}

void AFFICHAGE_AfficherPlateau(Couleur * plateau)
{
	int i, j;
  Position pos;

	printf("    a  b  c  d  e  f  g  h\n");

	for(i=1; i<=TAILLE; i++)
	{
		printf(" %d ", i);
		for(j=1; j<=TAILLE; j++)
		{

      pos = POSITION_CreerPosition(LIGNE_ObtenirLigneDepuisInt(i), COLONNE_ObtenirColonneDepuisInt(j));
      P_AFFICHAGE_TextColor(PLATEAU_ObtenirCouleurAvecPosition(plateau,pos));
      printf(" %c ",COULEUR_ObtenirSymbole(PLATEAU_ObtenirCouleurAvecPosition(plateau,pos)));

		}
		printf("\n");
	}
}

void AFFICHAGE_AfficherResultatsPartie(Couleur * plateau, Joueur j1, Joueur j2) {
  int scorej1 = PLATEAU_CalculerPoints(plateau, JOUEUR_ObtenirCouleur(j1));
  int scorej2 = PLATEAU_CalculerPoints(plateau, JOUEUR_ObtenirCouleur(j2));

  printf("Score du Joueur 1 ( %c ) : %dpts\n", COULEUR_ObtenirSymbole(JOUEUR_ObtenirCouleur(j1)), scorej1);
  printf("Score du Joueur 2 ( %c ) : %dpts\n", COULEUR_ObtenirSymbole(JOUEUR_ObtenirCouleur(j2)), scorej2);
  printf("--------------------------------");

  char * vainqueur;

  if (scorej1 == scorej2) {
    printf("Résultat : Egalité !\n");
  }
  else {
    if (scorej1 > scorej2) {
      vainqueur = "Joueur 1";
    }
    else {
      vainqueur = "Joueur 2";
    }
    printf("Résultat : %s vainqueur !",vainqueur);
  }

}

void AFFICHAGE_AfficherResultatsPartieTournois(Couleur * plateau, Joueur j1, Joueur j2) {
  int scorej1 = PLATEAU_CalculerPoints(plateau, JOUEUR_ObtenirCouleur(j1));
  int scorej2 = PLATEAU_CalculerPoints(plateau, JOUEUR_ObtenirCouleur(j2));
  if (scorej1 == scorej2) {
    printf("nulle\n");
  }
  else {
    if (scorej1 > scorej2) {
      printf("%s", COULEUR_ObtenirStr(JOUEUR_ObtenirCouleur(j1)));
      }
    else {
    if(scorej1 < scorej2){
      printf("%s", COULEUR_ObtenirStr(JOUEUR_ObtenirCouleur(j2)));
    }
    else {
    printf("nulle\n");}
    }
  } 
}
void AFFICHAGE_AfficherPlateauTournois(Couleur * plateau) {
  //pour l'instant aucun affichage de plateau de partie nécessaire en mode tournois
}

void AFFICHAGE_MessageAide() {
printf("Aide pour le joueur : \n \n");
printf("Deux modes de jeu sont disponibles : \n");
printf("- Mode Standard : (blanc | noir [profondeur > 1]) \n");
printf("     - Permet de jouer contre l""ordinateur en lui donnant les blancs ou les noirs \n");
printf("     - Par defaut [profondeur> = 5] \n \n");
printf("- Mode Tournoi : (blanc | noir [profondeur > 1] \n");
printf("     - Permet de faire jouer le programme dans un mode ""tournoi"" en lui donnant les blancs ou les noirs \n");
printf("     - Par defaut [profondeur = 5] \n \n");
printf("Comment poser un pion sur le plateau ? \n");
printf("     - Ecrire le chiffre de la ligne puis la lettre de la colonne \n");
printf("         ex : ""7e"" \n");
printf("     - Ligne de ""1"" a ""8"" \n");
printf("     - Colonne de ""a"" a ""h"" \n");
}

void AFFICHAGE_AfficherCoupJoue(Coup coupJoue){
  char ligne[2] = "\0";
  char colonne[3] = "\0";
  ligne[0] = '0'+LIGNE_ObtenirNumeroLigne(coupJoue.position.ligne);
  colonne[0] = COLONNE_ObtenirCharDepuisColonne(coupJoue.position.colonne);
  printf("%s", strcat(strcat(colonne, ligne), "\n"));
  fflush(stdout);
}
