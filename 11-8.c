#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct date {
        int month;
        int day;
    };
    struct data
    {
        char name[10];
        int math;
        struct date birthday;
    } s1;
    gets(s1.name);
    scanf("%d %d %d", &s1.math, &s1.birthday.month, &s1.birthday.day);
    printf("%s\n%d\n%d\n%d\n", s1.name, s1.math, s1.birthday.month, s1.birthday.day);
    printf("%d", sizeof(s1));
}