#include <stdio.h>

#define MAX_LEN 100

int main(void)
{
    char a[MAX_LEN], c, *p = a;

    printf("Enter a message: ");
    while ((c = getchar()) != '\n')
        *(p++) = c;

    printf("Reversal is: ");
    while (p-- > a)
        putchar(*p);

    printf("\n");
    return 0;
}