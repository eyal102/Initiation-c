#ifndef DataSructureInterface_H
#define DataSructureInterface_H

typedef struct {
    void (*add)(DataStructure *ds, Item *item);
    void (*remove)(DataStructure *ds, Item *item);
    Item* (*find)(DataStructure *ds, char *name);
    void (*list_all)(DataStructure *ds);
    void (*send)(DataStructure *ds, Item *item);
    void (*destroy)(DataStructure *ds);
} DataStructureInterface;


#endif // DataSructureInterface_H