#ifndef DIRECTION_TYPE
#define DIRECTION_TYPE
typedef enum{H, HD, D, BD, B, BG, G, HG}Direction;

#define DIRECTION_ERROR -1;



/**
 *  Décalage à effectuer sur la lignes lors de l'application de la direction
 * 
 * \param direction : Direction
 * 
 * \return décalage : int
 * 
*/
int ObtenirDecalageLigne(Direction direction) ;



/**
 *  Décalage à effectuer sur la colonnescolonne lors de l'application de la direction
 * 
 * \param direction : Direction
 * 
 * \return décalage : int
 * 
*/
int ObtenirDecalageColonne(Direction direction) ;
#endif