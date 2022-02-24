#include <stdio.h>
void count(int *);

int main()
{
    int num = 0;
    count(&num);
    printf("%d", num);
}
void count(int *a)
{
    (*a)++;
}