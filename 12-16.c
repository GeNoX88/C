#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    srand(time(NULL));
    int i, n;
    FILE *fptr = fopen("C:\\USERS\\USER\\Desktop\\C\\rand.bin", "wb");

    if (fptr != NULL)
    {
        for (i = 0; i < 10; i++)
        {
            n = rand() % 16 + 1;
            printf("random %d: %d\n", i + 1, n);
            fwrite(&n, sizeof(int), 1, fptr);
        }
    }
    else
    {
        printf("fopen function failed, fptr==NULL\n");
    }
    int fc = fclose(fptr);
    if (fc == 0)
    {
        printf("fclose succeed\n");
    }
    else
    {
        printf("fclose fail\n");
    }
    //***********************************************
    fptr = fopen("C:\\USERS\\USER\\Desktop\\C\\rand.bin", "rb");
    int arr[10], max = 0;
    float sum = 0;
    if (fptr != NULL)
    {
        // for (i = 0; i < 10; i++)
        // {
        //     n = rand() % 16 + 1;
        //     printf("random %d: %d\n", i + 1, n);
        //     fwrite(&n, sizeof(int), 1, fptr);
        // }
        fread(arr, sizeof(int), 10, fptr);
        for (i = 0; i < 10; i++)
        {
            printf("reading random %d: %d\n", i + 1, *(arr + i));
            sum += *(arr + i);
            if (max < *(arr + i))
            {
                max = *(arr + i);
            }
        }
        printf("max: %d\naverage: %f\n", max, sum / 10);
    }
    else
    {
        printf("fopen function failed, fptr==NULL\n");
    }
    fc = fclose(fptr);
    if (fc == 0)
    {
        printf("fclose succeed\n");
    }
    else
    {
        printf("fclose fail\n");
    }
}