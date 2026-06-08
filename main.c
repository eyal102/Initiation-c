#include <stdio.h>
#include "datastructures/DataStructure.h"
#include "items/Location.h"
#include "items/Item.h"

int main() {
    Item user_item;
    user_item.interface = get_location_vtable();
    user_item.interface->create_item();
    printf("Hello, World!\n");
    return 0;
}