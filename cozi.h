#include <stdio.h>
#include <stdlib.h>

typedef int Data;

struct Node2
{
    Data val;
    struct Node2* next;
};

typedef struct Node2 Node2;

struct Q
{
    struct Node2 *front,*rear;
};

typedef struct Q Queue;

Queue* createQueue();
void enQueue(Queue*q, Data v);
Data deQueue(Queue*q);
int isEmpty(Queue*q);
void deleteQueue(Queue*q);


