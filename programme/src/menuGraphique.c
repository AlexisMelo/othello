#include "menuGraphique.h"

void menuGraphique() {
  //le but est de recomposer une ligne de commande comme si l'utilisateur l'avais directement saisie pour ensuite l'envoyer au menuLigneCommande

  char * arguments[] = {"./Othello","","","",""};
  int nbArguments = 4;
  int choix;

  //choix de l'utilisateur pour type de partie ou affichage d'aide
  printf("Que voulez vous faire ?\n\n1 : Nouvelle partie mode standard\n2 : Nouvelle partie mode tournois\n3 : Affichage de l'aide\n");
  choix = saisieInteger(1,3);

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
    printf("Quelle couleur voulez vous ?\n1 : Noir\n2 : Blanc\n");
    choix = saisieInteger(1,2);

    switch (choix) {
      case 1 :
        arguments[2] = "noir";
        break;
      case 2 :
        arguments[2] = "blanc";
        break;
    }

    //difficulté de l'IA
    printf("Quelle difficulté pour l'Intelligence artificelle ?\n[Nombre entre 1 et %d attendu, %d par défaut]\n",PRONDEUR_MAX_IA, PROFONDEUR_DEFAUT_IA);
    choix = saisieInteger(1,PRONDEUR_MAX_IA);

    char choixStr[sizeof(choix)];
    sprintf(choixStr,"%d",choix);
    arguments[3] = choixStr;

    //lancement du menu comme si c'était une ligne de commande
    menuLigneCommande(nbArguments,arguments);
  }
}
