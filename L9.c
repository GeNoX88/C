#include <math.h>
#include <stdbool.h>
#include <stdio.h>

// 字串解法
bool isPalindrome(int x)
{

    int n = 0, tmp = x;
    while (tmp != 0)
    {
        tmp = tmp / 10;
        n++;
    }
    char a[n + 1];
    printf("%d\n", n);
    sprintf(a, "%d", x);
    printf("a=%s\n", a);

    for (int i = 0; i < n / 2; i++)
    {
        if (a[i] != a[n - i - 1])
            return false;
        printf("i=%d, n-i-1=%d\n", i, n - i - 1);
    }

    return true;
}

// 整數解法
// bool isPalindrome(int x)
// {

//     if (x < 0)
//         return false;
//     else if (x < 10)
//         return true;

//     int n = 0, m, tmp = x;
//     while (tmp != 0)
//     {
//         tmp = tmp / 10;
//         n++;
//     }
//     m = n - 1;
//     printf("%d\n", n);

//     tmp = x;
//     while (tmp > 0)
//     {
//         printf("%d vs %d\n", tmp % 10, tmp / (int)(pow(10, m)));

//         if (tmp % 10 != tmp / (int)(pow(10, m)))
//             return false;
//         tmp = (tmp - tmp / (int)(pow(10, m)) * (int)(pow(10, m))) / 10;
//         m -= 2;
//     }
//     return true;
// }

int main(void)
{
    printf("%d\n", isPalindrome(1000021));
    int a[7] = {1, 2, 3, 4, 5, 6, 7};
    // int a = 2;

    // int *p = (int *)(&a);
    int *p = (int *)&a;

    printf("sizeof(p)=%d\n", sizeof(p));
    printf("a=%x\n", &a);
    printf("&a=%x\n", &a);
    printf("&a+1=%x\n", &a+1);
    // printf("&a+1=%p\n", &a + 1);
    // printf("*p=%d\n", *p);
    // printf("a[10]=%d\n", a[10]);
    printf("*p-1=%d\n", *p-1);
    // int *p = (int *)(&a + 1);
    // printf("a=%p\n&a=%p\n&a + 1=%p\np=%p\n", a, &a, &a + 1, p);
    // printf("%d\n%d\n", *(a + 1), *p);
}
