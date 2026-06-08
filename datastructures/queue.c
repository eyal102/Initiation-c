#include <stdio.h>
#include "DataStrcture.h"

typedef struct {
    DataStructure ds;
    int front;
    int rear;
} Queue;

void queue_add(DataStructure *ds, item *item) {
    Queue *queue = (Queue *)ds;
    if (queue->rear < queue->ds.size) {
        queue->ds.items[queue->rear++] = item;
    } else {
        printf("Queue is full!\n");
    }
}

