#include <stdio.h>
#include <string.h>
#define MAX 4
int main(void)
{
    FILE *fptr1, *fptr2, *fptr3;
    char str[MAX] = {0};

    int bytes;
    fptr1 = fopen("C:\\USERS\\USER\\Desktop\\C\\aa.txt", "r");
    fptr2 = fopen("C:\\USERS\\USER\\Desktop\\C\\bb.txt", "r");
    fptr3 = fopen("C:\\USERS\\USER\\Desktop\\C\\cc.txt", "w");
    if (fptr1 != NULL && fptr2 != NULL && fptr3 != NULL)
    {
        while (!feof(fptr1))
        {
            bytes = fread(str, sizeof(char), MAX, fptr1);
            fwrite(str, sizeof(char), bytes, fptr3);
        }
        strncpy(str, "", MAX); // strncpy會把中間的參數字串複製進str，最多達MAX個字元，不滿的空位全補上空字符'\0'
        while (!feof(fptr2))
        {
            bytes = fread(str, sizeof(char), MAX, fptr2);
            if (bytes != MAX)
            {
                fwrite(str, sizeof(char), bytes, fptr3);
            }
            else
            {
                fwrite(str, sizeof(char), MAX, fptr3);
            }
        }
        fclose(fptr1);
        fclose(fptr2);
        fclose(fptr3);
    }
    else
    {
        printf("fptr1 or fptr2 or fptr3 is NULL");
    }
}