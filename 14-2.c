#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr, *i;
    ptr = (int *)malloc(3 * sizeof(int));
    i = (int *)malloc(sizeof(int));

    *ptr = 12;
    *(ptr + 1) = 35;
    *(ptr + 2) = 140;
    for (*i = 0; *i < 3; (*i)++)
    {
        printf("*ptr+%d=%d\n", *i, *(ptr + *i));
    }
    printf("%d\n", *ptr);
    printf("%d\n", *i);
    free(ptr);
    free(i);
    printf("%d\n", *ptr);
    printf("%d\n", *i);
}