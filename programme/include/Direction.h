typedef enum{H, HD, D, BD, B, BG, G, HG}Direction;

#define DIRECTION_ERROR 1;



/**
 * @brief Décalage à effectuer sur les colonnes lors de l'application de la direction
 * 
 * @param direction : Direction
 * 
 * @returns décalage : int
 * 
*/
int obtenirDecalageLigne(Direction direction) ;



/**
 * @brief Décalage à effectuer sur les colonnes lors de l'application de la direction
 * 
 * @param direction : Direction
 * 
 * @returns décalage : int
 * 
*/
int obtenirDecalageColonne(Direction direction) ;