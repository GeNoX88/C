#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;

int main(void)
{
    NODE *first, *tmp;
    first = (NODE *)malloc(sizeof(NODE));
    first->data = 12;
    first->next = (NODE *)malloc(sizeof(NODE));
    tmp = first->next;
    tmp->data = 38;
    tmp->next = (NODE *)malloc(sizeof(NODE));
    tmp = tmp->next;
    tmp->data = 64;
    tmp->next = (NODE *)malloc(sizeof(NODE));
    tmp = tmp->next;
    tmp->data = 37;
    tmp->next = NULL;

    tmp = first->next;
    int i;
    for (i = 2; i <= 3; i++)
    {
        NODE *ptr = tmp->next;
        free(tmp);
        tmp = ptr;
    }
    first->next = tmp;
    
    NODE *ptr = first;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}