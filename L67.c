#include <stdio.h>

int bit(char c)
{
    int bb = 0;
    if (c == '0')
        bb = 0;
    else if (c == '1')
        bb = 1;
    return bb;
}
char btoc(int bit)
{
    char c;
    if (bit == 0)
        c = '0';
    else if (bit == 1)
        c = '1';
    return c;
}
char *addBinary(char *a, char *b)
{
    int tailA = 0, tailB = 0;
    while (*(a + tailA + 1) != '\0')
        tailA++;
    while (*(b + tailB + 1) != '\0')
        tailB++;

    int now = 0;
    int sSize, little, large;
    char *Large;
    if (tailA > tailB)
    {
        sSize = tailA + 3;
        little = tailB;
        large = tailA;
        Large = a;
    }
    else
    {
        sSize = tailB + 3;
        little = tailA;
        large = tailB;
        Large = b;
    }

    char s[sSize];
    s[sSize - 1] = '\0';

    int back = 0;
    int carry = 0;
    while (back <= sSize - 3)
    {
        printf("LL\n");

        if (back <= little)
        {
            s[sSize - 2 - back] = btoc((carry + bit(a[tailA - back]) + bit(b[tailB - back])) % 2);
            if (carry + bit(a[tailA - back]) + bit(b[tailB - back]) > 1)
            {
                carry = 1;
                printf("%c\n", s[sSize - 2 - back]);
            }
            else
            {
                carry = 0;
                printf("%c\n", s[sSize - 2 - back]);
            }
        }
        else
        {
            s[sSize - 2 - back] = btoc((carry + bit(Large[large - back])) % 2);
            if (carry + bit(Large[large - back]) > 1)
            {
                carry = 1;
                printf("%c\n", s[sSize - 2 - back]);
            }
            else
            {
                carry = 0;
                printf("%c\n", s[sSize - 2 - back]);
            }
        }
        back++;
    }
    if (carry == 1)
        s[0] = '1';
    else
    {
        for (int i = 0; i < sSize - 2; i++)
            s[i] = s[i + 1];
        s[sSize - 2] = '\0';
    }
    printf("s[0]=%c\n", s[0]);
    printf("s[1]=%c\n", s[1]);
    printf("s[2]=%c\n", s[2]);
    printf("s[3]=%c\n", s[3]);
    printf("s[4]=%c\n", s[4]);

    char *final = s;

    return final;
}
int main(void)
{
    char *a = "1101";
    char *b = "101";
    printf("%s\n", addBinary(a, b));
}