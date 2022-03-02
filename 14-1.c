#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int *ptr;
    ptr = (int *)malloc(sizeof(int));
    *ptr = 12;
    printf("%d\n", (*ptr)*(*ptr));
    free(ptr);
}