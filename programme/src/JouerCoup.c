#include "JouerCoup.h"
#include"Plateau.h"
#include"Coup.h"
#include <stdio.h>
#include <stdlib.h>
void JouerCoup(Couleur * plateauDeJeu,Coup coupJoue){
 PoserPion(plateauDeJeu, coupJoue);
 CapturerPions(plateauDeJeu, coupJoue);
}
  
