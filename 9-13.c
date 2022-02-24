#include <stdio.h>

int main()
{
    int price[] = {12, 16, 10, 14, 15};
    int A[3][5] = {
        {33, 32, 56, 45, 33},
        {77, 33, 68, 45, 23},
        {43, 55, 43, 67, 65}};
    int B[3] = {0};
    int C[5] = {0};
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            B[i] += A[i][j];
        }
        printf("%d ", B[i]);
    }
    printf("\n");
    i = 0, j = 0;
    for (j = 0; j < 5; j++)
    {
        for (i = 0; i < 3; i++)
        {
            C[j] += A[i][j];
        }
        printf("%d ", C[j]);
    }
    printf("\n");
    i = 0, j = 0;
    int Bmax = 0;
    int Cmax = 0;
    for (i=0;i<3;i++)
    {
        if(B[i]>B[Bmax])
        {
            Bmax = i;
        }
    }
    for (j=0;j<5;j++)
    {
        if(C[j]>C[Cmax])
        {
            Cmax = j;
        }
    }
    printf("%d\n", Bmax);
    printf("%d\n", Cmax);
}