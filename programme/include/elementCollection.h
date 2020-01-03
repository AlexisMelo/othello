#ifndef ELEMENT_COLLECTION
#define ELEMENT_COLLECTION

typedef void* (*EC_FonctionCopierDansCollection) (void*);
typedef void (*EC_FonctionLibererDeCollection) (void*);
typedef int (*EC_FonctionComparaison) (void*,void*);

#endif
