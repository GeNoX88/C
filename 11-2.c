#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct date
    {
        int year;
        int month;
        int day;
    };
    struct date holiday = {2004, 4, 26};
    struct date festival;
    scanf("%d %d %d", &festival.year, &festival.month, &festival.day); //%d之間以空格隔開這種，每輸入完一個數字可以空格、Tab或者按Enter換行做間隔
    printf("%02d/%02d/%04d\n%02d/%02d/%04d\n", holiday.month, holiday.day, holiday.year, festival.month, festival.day, festival.year);
}