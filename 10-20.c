#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 0;
    char *ptr[3] = {"Tog", "Lily", "James Lee"}; // ptr是個指標常數，指向ptr[0]，ptr[0]~ptr[2]也是指標，指向T, L, J的位址
    printf("%p\n%p\n%p\n", ptr, *ptr, ptr[0]);
    char *ptr2 = *ptr;
    int count = 0;
    while (i != 3)
    {
        if (*ptr2 == '\0')
        {
            i++;
        }
        ptr2++, count++;
    }
    printf("%d\n", count);
}