#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double *a;
    printf("&a=%p, a=%p, *a=%lf\n", &a, a, *a);

    int i;
    double sum = 0;

    for (i = 0; i < 3; i++)
    {
        scanf("%lf", a = (double *)malloc(sizeof(double)));
        printf("&a=%p, a=%p, *a=%lf\n", &a, a, *a);
        sum += *a;
        free(a);
        printf("&a=%p, a=%p, *a=%lf\n", &a, a, *a);
    }
    printf("sum: %lf\naverage: %lf\n", sum, sum / 3);
}