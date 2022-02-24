#include <stdlib.h>
#include <stdio.h>

void counter(void) {
    static int i = 0;
    printf("counter()已經被呼叫%d次了...\n", ++i);
}
double rpower(double r, int n) {
    counter();
    if (n==0) return 1;
    return r*rpower(r, n-1);
}
int main(void) {
    printf("%lf", rpower(2.0, 3));
}
