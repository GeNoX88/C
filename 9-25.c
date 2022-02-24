#include <stdio.h>

int main(void)
{
    char str[15];
    gets(str);
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    printf("%s\n", str);
}