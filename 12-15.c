#include <stdio.h>

int main(void)
{
    int arr[4]; // {12, 4, 5, 6}
    int a, b; // 12, 16
    printf("arr: %d %d %d %d\na: %d\nb: %d\n", *arr, *(arr + 1), *(arr + 2), *(arr + 3), a, b);
    FILE *fptr = fopen("C:\\USERS\\USER\\Desktop\\C\\hw12_14.bin", "rb");

    if (fptr != NULL)
    {
        printf("fopen succeed\n");
        fread(arr, sizeof(int), 4, fptr); //{00001100 00000000 00000000 00000000},{00000010 00000000 00000000 00000000},{00000011 00000000 00000000 00000000},{00000110 00000000 00000000 00000000}
        fread(&a, sizeof(int), 1, fptr);  //{00001100 00000000 00000000 00000000}
        fread(&b, sizeof(int), 1, fptr);  //{00010000 00000000 00000000 00000000}
        printf("arr: %d %d %d %d\na: %d\nb: %d\n", *arr, *(arr + 1), *(arr + 2), *(arr + 3), a, b);
    }
    else
    {
        printf("fopen function failed, fptr==NULL");
    }
    int fc = fclose(fptr);
    if (fc == 0)
    {
        printf("fclose succeed");
    }
    else
    {
        printf("fclose fail");
    }
}