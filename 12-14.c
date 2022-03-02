#include <stdio.h>

int main(void)
{   
    int arr[] = {12, 4, 5, 6};
    int a = 12, b = 16;
    FILE *fptr = fopen("C:\\USERS\\USER\\Desktop\\C\\hw12_14.bin", "wb");

    if (fptr != NULL)
    {
        fwrite(arr, sizeof(int), 4, fptr); //{00001100 00000000 00000000 00000000},{00000010 00000000 00000000 00000000},{00000011 00000000 00000000 00000000},{00000110 00000000 00000000 00000000}
        fwrite(&a, sizeof(int), 1, fptr);  //{00001100 00000000 00000000 00000000}
        fwrite(&b, sizeof(int), 1, fptr);  //{00010000 00000000 00000000 00000000}
    }
    else
    {
        printf("fopen function failed, fptr==NULL\n");
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