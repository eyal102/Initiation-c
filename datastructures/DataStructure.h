#ifndef DATASTRUCTURE_h
#define DATASTRUCTURE_h

#include "DataSructureInterface.h"
#include "../Items/Item.h"

typedef struct DataStructure {
    DataStructureInterface *interface;
    Item **items;
    int size;
} DataStructure;


#endif // DATASTRUCTURE_h