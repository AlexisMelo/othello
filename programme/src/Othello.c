#include <stdio.h>
#include "menuGraphique.h"
#include "menuLigneCommande.h"

/**
 * \fn int main (int argc, char ** argv)
 * \brief Entrée du programme.
 *
 * \return EXIT_SUCCESS - Arrêt normal du programme.
 */
int main(int nbArguments, char ** arguments) {
  if (nbArguments == 1) {
    menuGraphique();
  }
  else {
    menuLigneCommande(nbArguments, arguments);
  }
  return 0;
}
