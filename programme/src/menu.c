#include "menu.h"

int obtenirProfondeurIA(int nbArguments, char ** arguments) {
  if (nbArguments == 3){
    return strtol(arguments[2], NULL, 10);
  }
  return PROFONDEUR_DEFAUT_IA;
}
