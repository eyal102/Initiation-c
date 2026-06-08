#ifndef DATASTRUCTUREINTERFACE_H
#define DATASTRUCTUREINTERFACE_H

#include "../Items/Item.h"

// FORWARD DECLARATION: This completely avoids the chicken-and-egg problem.
typedef struct DataStructure DataStructure;

typedef struct {
    void (*add)(DataStructure *ds, Item *item);
    void (*remove)(DataStructure *ds, Item *item);
    Item* (*find)(DataStructure *ds, char *name);
    void (*list_all)(DataStructure *ds);
    void (*send)(DataStructure *ds, Item *item);
    void (*destroy)(DataStructure *ds);
} DataStructureInterface;
#endif // DATASTRUCTUREINTERFACE_H