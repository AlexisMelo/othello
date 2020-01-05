#include "../include/MenuGraphique.h"

void MENU_G_MenuGraphique() {
  //le but est de recomposer une ligne de commande comme si l'utilisateur l'avais directement saisie pour ensuite l'envoyer au menuLigneCommande

  char * arguments[] = {"./Othello","","",""};
  int nbArguments = 3;
  int choix;

  //choix de l'utilisateur pour type de partie ou affichage d'aide
  printf("Que voulez vous faire ?\n1 : Nouvelle partie %s (Joueur vs Joueur)\n2 : Nouvelle partie mode %s (Joueur vs IA)\n3 : Nouvelle partie mode %s (IA vs IA)\n4 : Affichage de l'aide\n", JOUEURVSJOUEUR, JOUEURVSIA, IAVSIA);
  choix = MENU_SaisieInteger(1,4);

  switch(choix) {
    case 1 :
      arguments[1] = JOUEURVSJOUEUR;
      break;
    case 2 :
      arguments[1] = JOUEURVSIA;
      break;
    case 3 :
      arguments[1] = IAVSIA;
      break;
    case 4 :
      AFFICHAGE_MessageAide();
      break;
  }

  //si l'utilisateur veut faire une partie
  if (choix != 4) {

    //difficulté de l'IA
    if (choix != 1) {
      printf("Quelle difficulté pour l'Intelligence artificelle ?\n[Nombre entre 1 et %d attendu, %d par défaut]\n",PRONDEUR_MAX_IA, PROFONDEUR_DEFAUT_IA);
      choix = MENU_SaisieInteger(1,PRONDEUR_MAX_IA);
      char choixStr[sizeof(choix)];
      sprintf(choixStr,"%d",choix);
      arguments[3] = choixStr;
      nbArguments = 4;
    }

    //quelle couleur il prend
    printf("Quelle couleur voulez vous ?\n1 : %s\n2 : %s\n", COULEUR_NOIRE, COULEUR_BLANCHE);
    choix = MENU_SaisieInteger(1,2);

    switch (choix) {
      case 1 :
        arguments[2] = COULEUR_NOIRE;
        break;
      case 2 :
        arguments[2] = COULEUR_BLANCHE;
        break;
    }



    //lancement du menu comme si c'était une ligne de commande
    MENU_LC_MenuLigneCommande(nbArguments,arguments);
  }
}
