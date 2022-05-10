#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char arr[][11] = {"C language", "C++", "Java"};
    printf("%d\n", sizeof(arr));
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("arr[%d]=%p\n", i, arr[i]);
    }
    for (i = 0; i < 3; i++)
    {
        printf("arr[%d]=%s\n", i, arr[i]);
    }
}