#ifndef ELEMENT COLLECTION
#define ELEMENT COLLECTION
typedef void* (*EC_FonctionCopierDansCollection) (void*);
typedef void (*EC_FonctionLibererDeCollection) (void*);
typedef int (*EC_FonctionComparaison) (void*,void*);
#endif