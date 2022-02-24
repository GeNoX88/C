#include <stdio.h>
#include <stdlib.h>
#define MAX 3
#define LENGTH 10
void string_cpy(char arr1[MAX][LENGTH], char arr2[MAX][LENGTH])
{
    int i, j;
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < LENGTH; j++)
        {
            if (arr1[i][j] == '\0')
            {
                break;
            }
            else
            {
                arr2[i][j] = arr1[i][j];
            }
        }
        arr2[i][j] = '\0';
    }
}

int main(void)
{
    char arr1[MAX][LENGTH] = {"C", "C++", "Java"};

    char arr2[MAX][LENGTH]; //沒定義初值，所以內容會是一些garbage value

    int i;
    string_cpy(arr1, arr2);
    for (i = 0; i < MAX; i++)
    {
        printf("%s\n", arr2[i]);
    }
}