#include "stive.h"
#include "cozi.h"

int main()
{
    /*int i;
    Node* stackTop = NULL;
    char s[] = "(()(";

    verify_paratheses(s);*/

    int i;
    Queue *q;
    q = createQueue();

    for(i=0; i<3; i++)
        enQueue(q,i);

    inverse_queue(q);

    while(!isEmpty(q))
        printf("%d", deQueue(q));

}
