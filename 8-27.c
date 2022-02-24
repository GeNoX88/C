#include <stdio.h>
#include <stdlib.h>
int i1, i2;
int fib1(int n)
{
    i1++;
    if (n == 1 || n == 2)
    {
        
        return 1;
    }
    else
    {
        int a = 1, b = 1, c, i;
        for (i = 2; i < n; i++)
        {
            i1++;
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
}
int fib2(int n)
{
    ++i2;
    if (n == 1 || n == 2)
        return 1;
    else
        return fib2(n - 1) + fib2(n - 2);
}
int main(void)
{
    int n;

    for (n = 1; n <= 30; n++)
    {
        i1 = 0;
        i2 = 0;
        // printf("fib1(%d)= %d\n",n, fib1(n));
        // printf("fib2(%d)= %d\n",n, fib2(n));
        printf("n=%2d, for迴圈 %2d次, 遞迴 %2d次\n", n, i1, i2);
    }
    return 0;
}
