#include <stdlib.h>
#include <stdio.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;

int main(void)
{
    int i, arr[] = {12, 43, 56, 34, 98, 76, 43, 24};
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

    current = first;
    while (current->data != 56)
    {
        current = current->next;
    }

    printf("*****************************\n");

    NODE *insert = (NODE *)malloc(sizeof(NODE));
    insert->data = 88;
    insert->next = current->next;
    current->next = insert;

    current = first;
    while (current != NULL)
    {
        printf("%d\n", current->data);
        current = current->next;
    }
}