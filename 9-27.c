#include <stdio.h>
#include <stdlib.h>
void reverse(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        ++i;
    }
    int j;
    char str2[i + 1];
    str2[i] = '\0';
    for (j = i - 1; j >= 0; j--)
    {
        str2[j] = str[-j + i - 1];
    }
    puts(str2);
}

int main(void)
{
    char str[20];

    gets(str);
    reverse(str);
}