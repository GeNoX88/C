#include <stdlib.h>
#include <stdio.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;

NODE *insertFirstNode(NODE *, int);

int main(void)
{
    int i, arr[] = {12, 43, 56, 34};
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

    first = insertFirstNode(first, 53);
    current = first;
    while (current != NULL)
    {
        printf("%d\n", current->data);
        current = current->next;
    }
}

NODE *insertFirstNode(NODE *first, int num)
{
    NODE *insert = (NODE *)malloc(sizeof(NODE));
    insert->data = num;
    insert->next = first;
    first = insert;
}