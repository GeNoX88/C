#include <stdio.h>

int main(void)
{
    FILE *fptr;
    char str[100];
    // int count = 0;

    fptr = fopen("C:\\USERS\\USER\\Desktop\\C\\welcome.txt", "r");
    if (fptr != NULL)
    {
        while ((fgets(str, 6, fptr)) != NULL) //以5個字元為單位，要設定為6
        {
            printf("%s", str);
        }
        printf("TAIL");
    }
    else
    {
        printf("fopen return NULL");
    }
    fclose(fptr);
}