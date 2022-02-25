#include <stdio.h>
#include <stdlib.h>
struct data
{
    char name[10];
    int math;
};
struct data best(struct data student[])
{
    int i, j;
    int hiScore = 0;
    for (i = 0; i < 5; i++)
    {
        if ((student + i)->math > hiScore)
        {
            hiScore = (student + i)->math;
            j = i;
        }
    }
    return *(student + j);
}
void failed(struct data student[])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        if ((student + i)->math < 60)
        {
            printf("%s %d\n", (student + i)->name, (*(student + i)).math);
        }
    }
}
double average(struct data student[])
{
    double sum = 0;
    int i;
    for (i = 0; i < 5; i++)
    {
        sum += (student + i)->math;
    }
    return sum / 5;
}
void sort(struct data student[])
{
    int i, j = 0;
    int notOk = 1;
    while (notOk)
    {
        notOk = 0;
        for (i = 0; i < 4 - j; i++)
        {
            if ((student + i)->math < (student + i + 1)->math)
            {
                notOk = 1;
                // int tmp = (student + i)->math;
                // (student + i)->math = (student + i + 1)->math;
                // (student + i + 1)->math = tmp;
                struct data tmp = *(student + i);
                *(student + i) = *(student + i + 1);
                *(student + i + 1) = tmp;
            }
        }
        j++;
    }
}
int main(void)
{
    struct data student[5] = {{"Jenny", 90}, {"Cinna", 67}, {"Andy", 99}, {"Leo", 43}, {"Gino", 30}};
    printf("failed:\n");
    failed(student);
    printf("highest: %s\n", best(student).name);
    printf("average: %lf\n", average(student));
    sort(student);
    printf("sort: %s\n", (student+0)->name);
}