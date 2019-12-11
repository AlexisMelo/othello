#include"Direction.h";

int obtenirDecalageLigne(Direction direction) {
      switch (direction)
    {
    case 0:
        return -1;
    case 1:
        return -1;
    case 2:
        return 0;
    case 3:
        return 1;
    case 4:
        return 1;
    case 5:
        return 1;
    case 6:
        return 0;
    case 7:
        return -1;
    default:
        __raise DIRECTION_ERROR;
    }
}

int obtenirDecalageColonne(Direction direction) {
      switch (direction)
    {
    case 0:
        return 0;
    case 1:
        return 1;
    case 2:
        return 1;
    case 3:
        return 1;
    case 4:
        return 0;
    case 5:
        return -1;
    case 6:
        return -1;
    case 7:
        return -1;
    default:
        __raise DIRECTION_ERROR;
    }
}