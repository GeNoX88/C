#include <stdio.h>
#include <math.h>
double my_fun(int n)
{
    double sum = 0;
    int k;
    for (k = 1; k <= n; k++)
    {
        sum += pow(2, -k);
    }
    return sum;
}
int main(void)
{
    printf("%f\n%f\n%f\n%f\n", my_fun(3), my_fun(4), my_fun(5), my_fun(6));
    int n=0;
    do{
        n++;
    } while (my_fun(n)<=0.99999);
    printf("%d", n);
}