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
    NODE a, b, c, d;
    a.data = 12;
    a.next = &b;
    b.data = 38;
    b.next = &c;
    c.data = 64;
    c.next = &d;
    d.data = 37;
    d.next = NULL;
    NODE *ptr = &a;
    while(ptr !=NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}