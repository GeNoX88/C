
#include <stdlib.h>
#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
void combineList(NODE *, NODE *);

int main(void)
{
    int i, arr1[] = {12, 43, 56, 34, 98}, arr2[] = {36, 77, 99};
    NODE *first1, *first2, *current, *previous;

    for (i = 0; i < sizeof(arr1) / sizeof(int); i++)
    {
        current = (NODE *)malloc(sizeof(NODE));
        current->next = NULL;
        current->data = *(arr1 + i);
        if (i == 0)
        {
            first1 = current;
        }
        else
        {
            previous->next = current;
        }
        previous = current;
    }
    for (i = 0; i < sizeof(arr2) / sizeof(int); i++)
    {
        current = (NODE *)malloc(sizeof(NODE));
        current->next = NULL;
        current->data = *(arr1 + i);
        if (i == 0)
        {
            first2 = current;
        }
        else
        {
            previous->next = current;
        }
        previous = current;
    }

    current = first1;
    printf("first1\n");

    while (current != NULL)
    {
        printf("%d\n", current->data);
        current = current->next;
    }
    printf("first2\n");
    current = first2;

    while (current != NULL)
    {
        printf("%d\n", current->data);
        current = current->next;
    }
    combineList(first1, first2);
    printf("combine\n");
    current = first1;

    while (current != NULL)
    {
        printf("%d\n", current->data);
        current = current->next;
    }
}

void combineList(NODE *first1, NODE *first2)
{
    NODE *current = first1;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = first2;
}