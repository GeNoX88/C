#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    struct data
    {
        char name[10];
        int math;
    } student[5] = {{"Jenny", 90}, {"Cinna", 67}, {"Andy", 99}, {"Leo", 43}, {"Gino", 30}};
    int hiScore = 0;
    char *hiName;
    printf("highest:\n");
    for (i = 0; i < 5; i++)
    {
        if (student[i].math > hiScore)
        {
            hiScore = student[i].math;
            hiName = student[i].name;
        }
    }
    printf("%s %d\n", hiName, hiScore);
    printf("failed:\n");
    for (i = 0; i < 5; i++)
    {
        if (student[i].math < 60)
        {
            printf("%s %d\n", student[i].name, student[i].math);
        }
    }
    float sum = 0;

    for (i = 0; i < 5; i++)
    {
        sum += student[i].math;
    }
    printf("average:\n");
    printf("%f\n", sum / 5);
}