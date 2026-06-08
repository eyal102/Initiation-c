#ifndef DATASTRUCTURE_h
#define DATASTRUCTURE_h

#include "DataSructureInterface.h"
#include "../Items/Item.h"

typedef struct DataStructure {
    DataStructureInterface *interface;
    Item **items;
    int count;
} DataStructure;


#endif // DATASTRUCTURE_h