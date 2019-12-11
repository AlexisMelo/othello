#include "menu.h"

int obtenirProfondeurIA(nbArguments, arguments) {
  if (nbArguments == 3){
    return arguments[2];
  }
  return PROFONDEUR_DEFAUT_IA;
}
