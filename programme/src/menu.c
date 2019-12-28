#include "menu.h"

int obtenirProfondeurIA(int nbArguments, char ** arguments) {
  if (nbArguments == 4){
    return strtol(arguments[3], NULL, 10);
  }
  return PROFONDEUR_DEFAUT_IA;
}
