#include <stdio.h>
#include <stdlib.h>
#include "Item.h"

// Declare the functions
Item* create_new_location(void);

typedef struct Location
{
    Item item;
    double x;
    double y;
    double z;
}Location;

static ItemInterface location_vtable = {
    .create_item = create_new_location
    // .destroy_item = destroy_location
    // .print_item = print_location
    // .get_name = get_location_name
    // .compare_names = compare_names_location
    // .send_iten = send_location 
};

// Return the pointer to our single VTable
ItemInterface* get_location_vtable(void) {
    return &location_vtable;
}

Item* create_new_location(void) {
    // 1. Allocate memory for the full Location struct, not just Item
    Location* loc = malloc(sizeof(Location));
    if (loc == NULL) {
        return NULL;
    }

    // 2. Assign the single VTable to the base Item component
    loc->item.interface = &location_vtable;

    // 3. Store the user's coordinates
    loc->x = 1;
    loc->y = 2;
    loc->z = 3;
    printf("Create Location\n");

    // 4. Safely typecast and return as a generic Item pointer
    return (Item*)loc;
}