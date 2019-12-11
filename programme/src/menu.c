#include "menu.h"

int obtenirProfondeurIA(int nbArguments, char ** arguments) {
  if (nbArguments == 3){
    return (int)arguments[2];
  }
  return PROFONDEUR_DEFAUT_IA;
}
