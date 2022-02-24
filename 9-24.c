#include <stdio.h>

int main(void)
{
    char str[15];
    gets(str);
    int k = 0, a = 0, e = 0, i = 0, o = 0, u = 0;
    while (str[k] != '\0')
    {
        switch (str[k])
        {
        case 'a':
            a++;
            break;
        case 'e':
            e++;
            break;
        case 'i':
            i++;
            break;
        case 'o':
            o++;
            break;
        case 'u':
            u++;
            break;
        }
        k++;
    }
    printf("a:%d, e:%d, i:%d, o:%d, u:%d\n", a, e, i, o, u);
}