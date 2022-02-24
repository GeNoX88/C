#include <stdio.h>
#include <stdlib.h>

void display(char *, int);
int main(void)
{
    char *ptr = "E-mini Nasdaq";
    int n = 4;
    display(ptr, n);
}

void display(char *ptr, int n)
{
    printf("%s", ptr + n - 1);
}