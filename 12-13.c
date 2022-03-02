#include <io.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>

int main(void)
{
    int arr[4] = {0}; //{12, 4, 5, 6}
    int a = 0, b = 0; // 12, 16

    int file = open("C:\\USERS\\USER\\Desktop\\C\\hw12_12.bin", O_RDONLY | O_BINARY);
    if (file != -1)
    {
        read(file, arr, sizeof(arr));
        read(file, &a, sizeof(a));
        read(file, &b, sizeof(b));
        printf("arr: %d %d %d %d\na: %d\nb: %d\n", *arr, *(arr + 1), *(arr + 2), *(arr + 3), a, b);
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