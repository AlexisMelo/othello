#include "Othello.h"

int main(int nbArguments, char ** arguments) {
  if (nbArguments == 1) {
    MENU_G_MenuGraphique();
  }
  else {
    MENU_LC_MenuLigneCommande(nbArguments, arguments);
  }
  return 0;
}
