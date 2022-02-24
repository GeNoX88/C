#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int find_k(int n)
{
    if (abs(4 * ((n - 2) / 4) + 2 - n) <= abs(4 * (((n - 2) / 4) + 1) + 2 - n))
    {
        return (n - 2) / 4;
    }
    else
    {
        return ((n - 2) / 4) + 1;
    }
}
int prime(int n)
{
    int i;
    int j;
    if (n == 1)
    {
        return 2;
    }
    else
    {
        j = 3;
    }

    for (i = 1; i < n; i++)
    {
        int k;
        int isPrime = 1;
        for (k = 1; k <= sqrt(j); k = k + 2)
        {
            if (j % k == 0 && k != 1)
            {
                isPrime = 0;
                break;
            }
        }
        if (!isPrime)
        {
            i--;
        }
        j = j + 2;
    }
    return j - 2;
}
double Euler(int n)
{
    int i;
    double P = 2;
    for (i = 0; i < n; i++)
    {
        int primeI = prime(i + 2);
        P = P * primeI / (4 * find_k(primeI) + 2);
    }
    return P;
}
int main(void)
{
    printf("%lf\n%lf\n%lf\n", Euler(100), Euler(1000),Euler(10000));
}