#include <stdio.h>
#include <stdlib.h>
typedef struct _Node
{
    int value;
    struct _Node *next;

} node;

int main()
{

    node *head = NULL;
    int number = 0;
    do
    {
        scanf("%d", &number);

        if (number != -1)
        {
            // add to linked-list
            node *p = (node *)malloc(sizeof(node));
            p->value = number;
            p->next = NULL;
           
            // find the last
            node *last = head;

            if (last)
            {
                while (last->next)
                {

                     last = last->next;
                
                }

                // attach
                last->next = p;
            
            }   else head = p;
        }

    } while (number != -1);

    return 0;
}
