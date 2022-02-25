#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct data
{
    char name[10];
    int math;
};
void add5(struct data *a)
{
    a->math = a->math + 5;
}
int main(void)
{
    struct data gg = {"ok", 10};
    printf("%d\n", gg.math);
    add5(&gg);
    printf("%d\n", gg.math);
}
