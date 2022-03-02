#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double *a = (double *)malloc(3 * sizeof(double));
    int i;
    for (i = 0; i < 3; i++)
    {
        scanf("%lf", a + i);
    }
    double sum = 0;
    for (i = 0; i < 3; i++)
    {
        sum += *(a + i);
    }
    printf("sum: %lf\naverage: %lf\n", sum, sum / 3);
    free(a);
}