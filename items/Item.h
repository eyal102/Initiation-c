#ifndef ITEM_H
#define ITEM_H

#include "ItemInterface.h"

typedef struct Item
{
    ItemInterface *interface;
    char *name;
} Item;

#endif 

