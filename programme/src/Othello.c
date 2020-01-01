#include "Othello.h"

int main(int nbArguments, char ** arguments) {
  if (nbArguments == 1) {
    MenuGraphique();
  }
  else {
    MenuLigneCommande(nbArguments, arguments);
  }
  return 0;
}
