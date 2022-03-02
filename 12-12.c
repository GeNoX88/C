#include <io.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>

int main(void)
{
    int arr[] = {12, 4, 5, 6};
    int a = 12, b = 16;

    int file = open("C:\\USERS\\USER\\Desktop\\C\\hw12_12.bin", O_WRONLY | O_BINARY | O_CREAT, S_IWRITE);
    if (file != -1)
    {
        write(file, arr, sizeof(arr)); //{00001100 00000000 00000000 00000000},{00000010 00000000 00000000 00000000},{00000011 00000000 00000000 00000000},{00000110 00000000 00000000 00000000}
        write(file, &a, sizeof(a));    //{00001100 00000000 00000000 00000000}
        write(file, &b, sizeof(b));    //{00010000 00000000 00000000 00000000}
        int c = close(file);
        if (c == 0)
        {
            printf("close succeed");
        }
        else
        {
            printf("close fail");
        }
    }
    else
    {
        printf("open function failed");
    }
}