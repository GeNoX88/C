#include <stdio.h>
#include <math.h>
double f(double x) {
    return 3*pow(x, 3)+2*x-1;
}
int main(void) {
    printf("%f, %f, %f", f(-3.2), f(-2.1), f(2.1));
}