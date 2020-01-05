#include"../include/Affichage.h"

void SetTextColorToBlack(){
    printf("\033[0;30m");
}
void SetTextColorToWhite(){
    printf("\033[0;37m");
}
void ResetTextColor(){
    printf("\033[0m");
}


void TextColor(Couleur couleur){
    if (COULEUR_EstEgalCouleur(couleur,COULEUR_ObtenirCouleurNoir())) {
      SetTextColorToBlack();
    }
    else if (COULEUR_EstEgalCouleur(couleur,COULEUR_ObtenirCouleurBlanc())) {
      SetTextColorToWhite();
    }
    else {
      ResetTextColor();
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
      TextColor(PLATEAU_ObtenirCouleurAvecPosition(plateau,pos));
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
  //pour l'instant aucun affichage de fin de partie nécessaire en mode tournois
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
