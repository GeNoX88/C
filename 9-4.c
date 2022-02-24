#include <stdio.h>

int main(void)
{
    int arr[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 3; i++)
    {
        printf("%d ", arr[i]);
    }
}