#include "Othello.h"

int main(int nbArguments, char ** arguments) {
  if (nbArguments == 1) {
    menuGraphique();
  }
  else {
    menuLigneCommande(nbArguments, arguments);
  }
  return 0;
}
