#include"ParcourirDirection.h"

bool RECHERCHEDIRECTIONS_CoupPossibleDansUneDirectionQuelconque(Couleur * plateau, Coup coup) {
    return (RECHERCHEDIRECTIONS_CoupPossibleDansDirection(plateau, coup, HG)
            || RECHERCHEDIRECTIONS_CoupPossibleDansDirection(plateau, coup, H)
            || RECHERCHEDIRECTIONS_CoupPossibleDansDirection(plateau, coup, HD)
            || RECHERCHEDIRECTIONS_CoupPossibleDansDirection(plateau, coup, D)
            || RECHERCHEDIRECTIONS_CoupPossibleDansDirection(plateau, coup, BD)
            || RECHERCHEDIRECTIONS_CoupPossibleDansDirection(plateau, coup, B)
            || RECHERCHEDIRECTIONS_CoupPossibleDansDirection(plateau, coup, BG)
            || RECHERCHEDIRECTIONS_CoupPossibleDansDirection(plateau, coup, G));
}

bool RECHERCHEDIRECTIONS_CoupPossibleDansDirection(Couleur * plateau, Coup coup, Direction direction) {

    Position nouvellePosition = POSITION_AppliquerDirection(COUP_ObtenirPosition(coup), direction);

    if (!PLATEAU_EstPositionValide(plateau, nouvellePosition)) { // la position n'existe pas sur le plateau
      return false;
    }

    if (!COULEUR_SontEgalesCouleurs(PLATEAU_ObtenirCouleurAvecPosition(plateau, nouvellePosition), COULEUR_ObtenirCouleurOpposee(COUP_ObtenirCouleur(coup)))) { //la couleur de la case dans la nouvelle position n'est pas de couleur opposée à la couleur de base
      return false;
    }

    //à partir de ce moment on sait qu'on a rencontré la couleur adverse collée au coup de départ, donc on peut potentiellement avoir un coup dans cette direction
    bool caseVideRencontree = false;
    bool maCouleurRencontree = false;
    bool limitePlateauAtteinte = false;
    while (!caseVideRencontree && !maCouleurRencontree && !limitePlateauAtteinte) {

        nouvellePosition = POSITION_AppliquerDirection(nouvellePosition, direction);

        limitePlateauAtteinte = !PLATEAU_EstPositionValide(plateau, nouvellePosition);

        if (!limitePlateauAtteinte) {

          if (COULEUR_SontEgalesCouleurs(PLATEAU_ObtenirCouleurAvecPosition(plateau, nouvellePosition), COUP_ObtenirCouleur(coup))) {
            maCouleurRencontree = true;
          }
          else {
            if (PLATEAU_EstPositionLibre(plateau, nouvellePosition)) {
              caseVideRencontree = true;
            }
          }

        }

    }

    return maCouleurRencontree;//caseVideRencontree;
}
