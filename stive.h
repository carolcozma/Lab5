#include <stdio.h>
#include <stdlib.h>

struct Node
{
    char val;
    struct Node* next;
};

typedef struct Node Node;

char top(Node *top);
void push(Node**top, char v);
char pop(Node**top);
int isEmptyStack(Node*top);
void deleteStack(Node**top);

