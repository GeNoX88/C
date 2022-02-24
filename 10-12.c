#include <stdio.h>
void square(int *arr, int);

int main()
{
    int arr[5] = {0, 1, 2, 3, 4};
    square(arr, sizeof(arr) / sizeof(*arr));
}

void square(int *arr, int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        *(arr + i) = (*(arr + i)) * (*(arr + i));
        printf("%d ", arr[i]);
    }
}