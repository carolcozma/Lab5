#include <stdio.h>
#include <stdlib.h>

typedef int Data;

struct Node
{
    Data val;
    struct Node* next;
};

typedef struct Node Node;

struct Q
{
    struct Node *front,*rear;
};

typedef struct Q Queue;

void deleteStack(Node**top);
void enQueue(Queue*q, Data v);
Data deQueue(Queue*q);
int isEmpty(Queue*q);
void deleteQueue(Queue*q);


