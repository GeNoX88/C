#include <stdio.h>
int find(int n)
{
    int i = 8;
    int j = 0;
    for (j = 0; j < n; j++)
    {
        do
            i++;
        while (i % 3 != 2 || i % 5 != 3 || i % 7 != 2);
    }
    return i;
}
int main(void)
{
    int i;
    for (i = 1; i <= 12; i++)
    {
        printf("%d\n", find(i));
    }
}