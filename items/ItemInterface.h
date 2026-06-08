#ifndef ITEMINTERFACE_H
#define ITEMINTERFACE_H

// FORWARD DECLARATION: This completely avoids the chicken-and-egg problem.
typedef struct Item Item;

typedef struct ItemInterface {
    Item* (*create_item)(void);
    void (*destroy_item)(Item *item);
    void (*print_item)(Item *item);
    char* (*get_name)(Item *item);
    bool (*compare_names)(char *name1, char *name2);
    void (*send_item)(Item *item);
} ItemInterface;
#endif