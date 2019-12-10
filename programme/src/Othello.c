#include <stdio.h>

/**
 * \fn int main (int argc, char ** argv)
 * \brief Entrée du programme.
 *
 * \return EXIT_SUCCESS - Arrêt normal du programme.
 */
int main(int nbArguments, char ** arguments) {
  if (argc == 1) {
    menuGraphique();
  }
  else {
    menuLigneCommande(nbArguments, arguments);
  }
  return EXIT_SUCCESS;
}
