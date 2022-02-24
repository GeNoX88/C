#include <stdio.h>

int main()
{
    float num = 4.2f;
    int a1 = 4, a2 = 12;
    printf("%p\n%p\n%p", &num, &a1, &a2);
}