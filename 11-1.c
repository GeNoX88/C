#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct data
    {
        int num;
        char ch;
        double dist;
    }aaa;
    printf("%d", sizeof(aaa));
}