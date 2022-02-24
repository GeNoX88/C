#include <stdio.h>

int main()
{
    float num = 12.6f, *ptr;
    ptr = &num;
    printf("%p\n%p\n", &num, &ptr);
}