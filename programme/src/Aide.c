#include <stdio.h>
#include "Aide.h"

void MessageDAide () {
printf("Aide pour le joueur : \n \n");
printf("Deux modes de jeu sont disponibles : \n");
printf("- Mode Standard : (blanc | noir [profondeur > 2]) \n");
printf("     - Permet de jouer contre l""ordinateur en lui donnant les blancs ou les noirs \n");
printf("     - Par defaut [profondeur> = 5] \n \n");
printf("- Mode Tournoi : (blanc | noir [profondeur > 2] \n");
printf("     - Permet de faire jouer le programme dans un mode ""tournoi"" en lui donnant les blancs ou les noirs \n");
printf("     - Par defaut [profondeur = 5] \n \n");
printf("Comment poser un pion sur le plateau ? \n");
printf("     - Ecrire le chiffre de la ligne puis la lettre de la colonne \n");
printf("         ex : ""7e"" \n");
printf("     - Ligne de ""1"" a ""8"" \n");
printf("     - Colonne de ""a"" a ""h"" \n");
}