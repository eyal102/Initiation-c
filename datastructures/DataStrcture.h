#ifndef DataStructure_h
#define DataStructure_h

#include "DataSructureInterface.h"

typedef struct {
    DataStructureInterface *interface;
    Item **items;
    int size;
} DataStructure;


#endif // DataStructure_h