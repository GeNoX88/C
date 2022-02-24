#include <stdio.h>
#include <stdlib.h> 
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
int main(void)
{
    printf("%d\n", find_k(19));
}