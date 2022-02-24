#include <stdlib.h>
#include <stdio.h>

double rpower(double r, int n) {
    if (n==0) return 1;
    return r*rpower(r, n-1);
}
int main(void) {
    printf("%lf", rpower(2.0, 3));
}
