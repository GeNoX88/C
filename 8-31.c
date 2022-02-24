#include <stdlib.h>
#include <stdio.h>
#define f(x) (4*(x)*(x)+6*(x)-5)


int main(void)
{
    printf("%f\n%f\n%f\n", f(1.0), f(2.2), f(3.14)); 
    return 0;
}