#include <stdlib.h>
#include <stdio.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;

NODE *deleteNode(NODE *, int);

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
    printf("*******************************\n");

    first = deleteNode(first, 12);
    first = deleteNode(first, 34);
    first = deleteNode(first, 24);

    current = first;
    while (current != NULL)
    {
        printf("%d\n", current->data);
        current = current->next;
    }
}

NODE *deleteNode(NODE *first, int num)
{
    NODE *tmp, *current = first;
    if (current->data == num)
    {
        first = current->next;
        free(current);
        return first;
    }
    else
    {
        while (current->next->data != num)
        {
            current = current->next;
        }
    }

    tmp = current->next;
    current->next = current->next->next;
    free(tmp);
    return first;
}