#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <time.h>
#include <string.h>
#define MAX 3
int main()
{
    srand(time(NULL));
    int i, n, bytes;
    float sum = 0;
    char buffer[MAX] = {0};
    int file = open("C:\\USERS\\USER\\Desktop\\C\\rand.txt", O_RDWR | O_CREAT | O_TEXT, S_IWRITE);
    if (file == -1)
    {
        printf("open() failed");
        return 0;
    }

    for (i = 0; i < 10; i++)
    {
        n = rand() % 65 + 1;
        printf("random %d: %d\n", i + 1, n);
        itoa(n, buffer, 10);
        bytes = write(file, buffer, MAX);
        printf("%d\n", bytes);
    }
    close(file);
    strncpy(buffer, "", MAX);

    file = open("C:\\USERS\\USER\\Desktop\\C\\rand.txt", O_RDONLY);
    for (i = 0; i < 10; i++)
    {
        bytes = read(file, buffer, MAX);
        printf("%d bytes\n", bytes);
        n = atoi(buffer);
        printf("reading random %d: %d\n", i + 1, n);
        sum += n;
    }
    int c = close(file);
    if (c == 0)
    {
        printf("close succeed");
    }
    else
    {
        printf("close fail");
    }

    printf("average: %f\n", sum / 10);

    return 0;
}