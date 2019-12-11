#include <string.h>

void menuLigneCommande(int nbArguments, char ** arguments) {

  if (strcmp(argumnents[1], "standard") == 0) {
    printf("Jouer partie Joueur vs IA avec profondeur %d\n", obtenirProfondeurIA(nbArguments,arguments));
  }
  else if (strcmp(arguments[1], "tournois") == 0) {
    printf("Jouer partie IA vs IA avec profondeur %d\n", obtenirProfondeurIA(nbArguments,arguments));
  }
  else {
    printf("affichage de l'aide");
  }
}
