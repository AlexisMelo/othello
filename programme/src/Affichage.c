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

void AppliquerDecalageHorizontal(){
    for (int hori = 0; hori<HORIZONTAL_OFFSET; hori++){
                printf(" ");
            }
}


void AppliquerDecalageVertical(){
    for (int vert = 0; vert<VERTICAL_OFFSET; vert++){
                printf("\n");

    }
}
void AFFICHAGE_AfficherPlateau(Couleur * plateau){
    for (int i=1; i<=PLATEAU_ObtenirTaille(plateau); i++){
        AppliquerDecalageHorizontal();
        printf("-");
    };
    printf("\n");
    for (int i=1; i<=PLATEAU_ObtenirTaille(plateau); i++){
        printf("|");
        for (int j=1; j<=PLATEAU_ObtenirTaille(plateau); j++){
            Couleur couleur = PLATEAU_ObtenirCouleurAvecPosition(plateau, POSITION_CreerPosition(i,j));
            AppliquerDecalageHorizontal();
            TextColor(couleur);
            printf("%c",couleur.symbole);
            ResetTextColor();
        }
        printf("|");
        if(i<8){
            AppliquerDecalageVertical();
        }
        printf("\n");
    }
        for (int i=1; i<=PLATEAU_ObtenirTaille(plateau); i++){
            AppliquerDecalageHorizontal();
            printf("-");
    };
    printf("\n");
}

void InitialiserAffichagePlateau(){

    struct timespec ts;
    ts.tv_nsec = 9000000;
    ts.tv_sec = 0;
    Couleur * plateau = PLATEAU_CreerPlateau();
    Couleur couleur = COULEUR_ObtenirCouleurNeutre();
    for (int i=1; i<= 8; i++){
        for (int j=1; j<= 8; j++){
            Coup coup = COUP_CreerCoup(POSITION_CreerPosition(i, j), couleur);
            PLATEAU_JouerCoup(plateau, coup);
        }
    }
    couleur = COULEUR_ObtenirCouleurNoir();
    for (int i=1; i<= 8; i++){
        for (int j=1; j<= 8; j++){
            couleur = COULEUR_ObtenirCouleurOpposee(couleur);
            Coup coup = COUP_CreerCoup(POSITION_CreerPosition(i, j), couleur);
            PLATEAU_JouerCoup(plateau, coup);
            AFFICHAGE_AfficherPlateau(plateau);
            nanosleep(&ts, &ts);
            }
    };
    couleur = COULEUR_ObtenirCouleurNeutre();
    for (int i=1; i<= 8; i++){
        for (int j=1; j<= 8; j++){
            Coup coup = COUP_CreerCoup(POSITION_CreerPosition(i, j), couleur);
            PLATEAU_JouerCoup(plateau, coup);
            nanosleep(&ts, &ts);
            AFFICHAGE_AfficherPlateau(plateau);
        }
    }
    PLATEAU_InitialiserPlateau(plateau);
    AFFICHAGE_AfficherPlateau(plateau);
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
