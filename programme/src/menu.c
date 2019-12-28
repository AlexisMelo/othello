#include "menu.h"

int obtenirProfondeurIA(int nbArguments, char ** arguments) {
  if (nbArguments == 4){
    return atoi(arguments[3]);
  }
  return PROFONDEUR_DEFAUT_IA;
}
