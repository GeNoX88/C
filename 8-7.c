#include <stdio.h>
#include <math.h>

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
    printf("%d", prime(9));
    return 0;
}