#include "../include/Menu.h"

int ObtenirProfondeurIADepuisArguments(int nbArguments, char ** arguments) {
  if (nbArguments == 4){
    return atoi(arguments[3]);
  }
  return PROFONDEUR_DEFAUT_IA;
}

char * ObtenirStringCouleurPremierJoueurDepuisArguments(char ** arguments) {
  return arguments[2];
}

int SaisieInteger(int min, int max) {
  char *p, s[100];
  int n;

  while (fgets(s, sizeof(s), stdin)) {
      n = strtol(s, &p, 10);
      if ((p == s) || (*p != '\n') || (n < min) || (n > max)) {
          printf("\033[%dm Entrez un nombre entre %d et %d !\033[%dm\n",41, min, max,0);
      } else break;
  }
  return n;
}
