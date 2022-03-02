#include <stdlib.h>
#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
int listLength(NODE *first);

int main(void)
{
    int i, arr[] = {12, 43, 56, 34, 98};
    NODE *first, *current, *previous;
    for (i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        current = (NODE *)malloc(sizeof(NODE));
        current->next = NULL;
        current->data = *(arr + i);
        if (i == 0)
        {
            first = current;
        }
        else
        {
            previous->next = current;
        }
        previous = current;
    }

    current = first;
    while (current != NULL)
    {
        printf("%d\n", current->data);
        current = current->next;
    }
    printf("*******************************\n");

    printf("%d\n", listLength(first));
}

int listLength(NODE *first)
{
    NODE *current = first;
    int count = 0;
    while (current != NULL)
    {
        current = current->next;
        count++;
    }
    return count;
}