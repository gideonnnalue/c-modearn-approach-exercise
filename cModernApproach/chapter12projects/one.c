#include <stdio.h>

#define MAX_LEN 100

int main(void)
{
    char a[MAX_LEN], c, *p = a;
    // int len = 0;

    printf("Enter a message: ");
    while ((c = getchar()) != '\n')
        *(p++) = c;
    // while ((c = getchar()) != '\n')
    //     a[len++] = c;

    printf("Reversal is: ");
    while (p-- > &a[0])
        putchar(*p);
    // while (--len >= 0)
    //     printf("%c", a[len]);

    printf("\n");
    return 0;
}