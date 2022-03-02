#include <stdio.h>

int main(void)
{
    FILE *fptr1, *fptr2;
    char ch;
    int count = 0;
    fptr1 = fopen("C:\\USERS\\USER\\Desktop\\C\\welcome.txt", "r");
    fptr2 = fopen("C:\\USERS\\USER\\Desktop\\C\\output.txt", "w");
    if (fptr1 != NULL && fptr2 != NULL)
    {
        while ((ch = getc(fptr1)) != EOF)
        {
            putc(ch, fptr2);
            count++;
        }
        fclose(fptr1);
        fclose(fptr2);
        printf("%d\n", count);
    }
    else
    {
        printf("fptr1 or fptr2 is NULL");
    }
    fclose(fptr1);
    fclose(fptr2);
}