#include <stdio.h>
#include "DataStrcture.h"

typedef struct {
    DataStructure ds;
    int front;
    int rear;
} Queue;

void queue_add(DataStructure *ds, Item *item) {

    Queue *queue = (Queue *)ds;

    queue->ds.items = realloc(
        queue->ds.items,
        sizeof(Item*) * (queue->ds.count + 1)
    );

    if (queue->ds.items == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    queue->ds.items[queue->rear++] = item;

    queue->ds.count++;
}