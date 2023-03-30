#include "stive.h"

char top(Node *top)
{
    if (isEmptyStack(top)) return INT_MIN;
    return top->val;
}

void push(Node**top, char v)
{
    Node* newNode=(Node*)malloc(sizeof(Node));
    newNode->val=v;
    newNode->next=*top;
    *top=newNode;
}

char pop(Node**top)
{
    if (isEmptyStack(*top)) return INT_MIN;
    Node *temp=(*top);
    char aux=temp->val;
    *top=(*top)->next;
    free(temp);
    return aux;
}

int isEmptyStack(Node*top)
{
    return top==NULL;
}

void deleteStack(Node**top)
{
    Node  *temp;
    while (!isEmptyStack(*top))
        temp=*top;
    *top=(*top)->next;
    free(temp);
}

void verify_paratheses(char *s)
{
    Node *stackTop = NULL;
    Node *posTop = NULL;
    int i=0;

    while(s[i] != '\0')
    {
        if(s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            push(&stackTop,s[i]);
            push(&posTop,i);
        }


        if(s[i] == ')' || s[i] == ']' || s[i] == '}')
        {
            pop(&stackTop);
            pop(&posTop);
        }


        i++;
    }

    if(isEmptyStack(stackTop))
        printf("Parantezele sunt puse bine");
    else
        while(!isEmptyStack(stackTop))
            printf("Paranteza %c de pe pozitia %d nu este inchisa\n", pop(&stackTop),pop(&posTop));
}
