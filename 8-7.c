#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void clear(int *array, int size)
{
    int *p;
    for (p = array; p < array + size; p++)
    {
        *p = 0;
    }
}

int prime(int n)
{
    int i = 0;
    int j = 1;
    while (i < n)
    {
        j++;
        int k;
        int isPrime = 1;
        for (k = 1; k <= sqrt(j); k++)
        {
            if (j % k == 0 && k != 1)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1)
        {
            i++;
        }
    }
    return j;
}
int main(void)
{
    int a = 1;
    int *arr = (int *)malloc(sizeof(int) * 4);
    *(arr) = 0;
    *(arr + 1) = 1;
    int array[4];
    printf("%d\n%d\n%d\n%d\n", *arr, *(arr + 1), *(arr + 2), *(arr + 3));
    printf("%d\n%d\n%d\n%d\n", array[0], *(array + 1), *(array + 2), *(array + 3));
    printf("%d", prime(9));
    return 0;
}