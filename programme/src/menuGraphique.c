#include "menuGraphique.h"

void menuGraphique() {
  //le but est de recomposer une ligne de commande comme si l'utilisateur l'avais directement saisie pour ensuite l'envoyer au menuLigneCommande

  char * arguments[] = {"./Othello","","","",""};
  int nbArguments = 4;
  int choix;

  //choix de l'utilisateur pour type de partie ou affichage d'aide
  do {
    printf("Que voulez vous faire ?\n\n1 : Nouvelle partie mode standard\n2 : Nouvelle partie mode tournois\n3 : Affichage de l'aide\n");
    scanf("%d",&choix);
  } while((choix < 1) || (choix > 3));

  switch(choix) {
    case 1 :
      arguments[1] = "standard";
      break;
    case 2 :
      arguments[1] = "tournois";
      break;
    case 3 :
      MessageDAide();
      break;
  }

  //si l'utilisateur veut faire une partie
  if (choix != 3) {

    //quelle couleur il prend
    do {
      printf("Quelle couleur voulez vous ?\n1 : Noir\n2 : Blanc\n");
      scanf("%d",&choix);
    } while((choix < 1) || (choix > 2));

    switch (choix) {
      case 1 :
        arguments[2] = "noir";
        break;
      case 2 :
        arguments[2] = "blanc";
        break;
    }

    //difficulté de l'IA
    do {
      printf("Quelle difficulté pour l'Intelligence artificelle ? [Nombre entre 1 et 100 attendu]\n"); //remplacer 100 par le nombre où le temps de réfléxion dépasse les 10s exigées
      scanf("%d",&choix);
    } while((choix < 1) || (choix > 100));

    printf("working");
    arguments[3]=choix; // core dump ??
    printf("not working");
    //lancement du menu comme si c'était une ligne de commande
    menuLigneCommande(nbArguments,arguments);
  }
}
