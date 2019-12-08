#include<stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Plateau.h"
#include "Couleur.h"
#include "Coup.h"


int main() {
    int longueur = 8;
    int largeur = 8;
    Plateau plateau =creerPlateau();
    for (int i = 0; i < longueur; i++){
        for (int j = 0; j < largeur; j++) {
            Couleur couleur = obtenirCouleuropposee(couleur);
            Coup coup = creerCoup(creerPosition(i, j), couleur);
            jouerCoup(*plateau, coup);
            Couleur res = obtenirCouleurDepuisPlateau(plateau, creerPosition(creerLigne(i), creerColonne(j)));
            bool inter = estEgalCouleur(res, couleur);
            printf("test case %d, %d : %d", i, j, inter);
        }   
    }
}
