#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct date
    {
        int year;
        int month;
        int day;
    }aaa;
    printf("%d", sizeof(aaa));
}