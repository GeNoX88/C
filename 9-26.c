#include <stdio.h>
#include <stdlib.h>

int length(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        ++i;
    }
    return i;
}
int main(void)
{
    char str[20];
    gets(str);
    printf("%d\n", length(str));
}