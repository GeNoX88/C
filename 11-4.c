#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct time
    {
        int hour;
        int minutes;
        double second;
    } start = {12, 32, 25.49}, end = {15, 12, 17.53}, elapse;
    printf("%02d:%02d:%05.2f\n%02d:%02d:%05.2f\n", start.hour, start.minutes, start.second, end.hour, end.minutes, end.second);
    double e = 3600 * (end.hour - start.hour) + 60 * (end.minutes - start.minutes) + (end.second - start.second);
    printf("%f\n", e);
    printf("%d\n", (int)e);

    elapse.second = (int)e%60+e-(int)e;
    elapse.minutes = ((int)(e-elapse.second)%3600)/60;
    elapse.hour = (int)(e-60*elapse.minutes-elapse.second)/3600;
    printf("%02d:%d:%05.2f\n", elapse.hour, elapse.minutes, elapse.second);
    printf("%d\n", sizeof(elapse));
}