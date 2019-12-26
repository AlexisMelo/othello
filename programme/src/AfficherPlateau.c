#include"Couleur.h"
#include"Plateau.h"
#include<stdio.h>
#include<time.h>
int HORIZONTAL_OFFSET = 2;
int VERTICAL_OFFSET = 1;

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
void afficherPlateau(Couleur * plateau){
    for (int i=1; i<=obtenirTaille(plateau); i++){
        AppliquerDecalageHorizontal();
        printf("-");
    };
    printf("\n");
    for (int i=1; i<=obtenirTaille(plateau); i++){
        printf("|");
        for (int j=1; j<=obtenirTaille(plateau); j++){
            Couleur couleur = obtenirCouleurDepuisPlateau(plateau, creerPosition(i,j));
            AppliquerDecalageHorizontal();
            printf("%c",couleur.symbole);
            
        }
        printf("|");
        if(i<8){
            AppliquerDecalageVertical();
        }
        printf("\n");
    }
        for (int i=1; i<=obtenirTaille(plateau); i++){
            AppliquerDecalageHorizontal();
            printf("-");
    };
    printf("\n");
}

void InitialiserAffichagePlateau(){
    
    struct timespec ts;
    ts.tv_nsec = 9000000;
    ts.tv_sec = 0;
    Couleur * plateau = creerPlateau();
    Couleur couleur = CouleurNeutre();
    for (int i=1; i<= 8; i++){
        for (int j=1; j<= 8; j++){
            Coup coup = creerCoup(creerPosition(i, j), couleur);
            jouerCoup(plateau, coup);
        }
    }
    couleur = CouleurNoir();
    for (int i=1; i<= 8; i++){
        for (int j=1; j<= 8; j++){
            couleur = obtenirCouleuropposee(couleur);
            Coup coup = creerCoup(creerPosition(i, j), couleur);
            jouerCoup(plateau, coup);
            afficherPlateau(plateau);
            nanosleep(&ts, &ts);
            }
    };
    couleur = CouleurNeutre();
    for (int i=1; i<= 8; i++){
        for (int j=1; j<= 8; j++){
            Coup coup = creerCoup(creerPosition(i, j), couleur);
            jouerCoup(plateau, coup);
            nanosleep(&ts, &ts);
            afficherPlateau(plateau);
        }
    }
    Coup coup = creerCoup(creerPosition(4,4), CouleurNoir());
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(4,5), CouleurBlanc());
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(5,4), CouleurBlanc());
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(5,5), CouleurNoir());
    jouerCoup(plateau, coup);
    afficherPlateau(plateau);
}