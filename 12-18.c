#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // (a) 以純文字檔儲存
    int arr[] = {11326, 4445, 15589, 23740, 76840};
    char a[6] = {0};
    int i;
    FILE *file = fopen("hw12_18.txt", "w");
    if (file != NULL)
    {
        for (i = 0; i < sizeof(arr) / sizeof(int); i++)
        {
            itoa(*(arr + i), a, 10);
            printf("a No.%d: %s\n", i + 1, a);
            fwrite(a, sizeof(a), 1, file);
        }
    }
    else
    {
        printf("fopen function failed, fptr==NULL\n");
    }
    int fc = fclose(file);
    if (fc == 0)
    {
        printf("fclose succeed\n");
    }
    else
    {
        printf("fclose fail\n");
    }
    // (b) 以二進位檔儲存
    file = fopen("hw12_18.bin", "wb");
    if (file != NULL)
    {
        for (i = 0; i < sizeof(arr) / sizeof(int); i++)
        {
            printf("a No.%d: %d\n", i + 1, *(arr+i));
            fwrite(arr + i, sizeof(int), 1, file);
        }
    }
    else
    {
        printf("fopen function failed, fptr==NULL\n");
    }
    fc = fclose(file);
    if (fc == 0)
    {
        printf("fclose succeed\n");
    }
    else
    {
        printf("fclose fail\n");
    }
}