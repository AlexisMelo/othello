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


void TextColorFromHexa(char hexa[]){
    if (strcmp(hexa, "FF")==0){
        SetTextColorToBlack();
    };
    if(strcmp(hexa, "00")==0){
        SetTextColorToWhite();
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
            TextColorFromHexa(couleur.hexa);
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

void AFFICHAGE_AfficherResultatsPartie(Couleur * plateau) {
  printf("fin de partie");
}
