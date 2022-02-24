#include <stdio.h>

int main()
{
    int arr[5] = {31, 17, 33, 22, 16};
    int i, *ptr = arr;
    for (i = 0; i < 5; i++)
    {
        *(ptr + i) = *(ptr + i) + 10;
        printf("%d ", *(ptr + i));
    }
}