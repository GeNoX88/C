#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *oddEvenList(struct Node *head)
{
    if (!head || !head->next || !head->next->next)
        return head;

    struct Node *evenHead = head->next;
    struct Node *a;
    struct Node *b;
    a = head;
    b = head->next;
    int count = 0;
    while (b->next != NULL)
    {
        a->next = b->next;
        a = b;
        b = b->next;
        count++;
    }

    if (count % 2 == 1)
    {
        a->next = NULL;
        b->next = evenHead;
    }
    else if (count % 2 == 0)
    {
        a->next = evenHead;
    }
    return head;
}

typedef struct Node NODE;

int main(void)
{
    int i, arr[] = {1, 2, 3, 4, 5, 6, 7};
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
    oddEvenList(first);
    printf("**************************************\n");
    current = first;
    while (current != NULL)
    {
        printf("%d\n", current->data);
        current = current->next;
    }
}