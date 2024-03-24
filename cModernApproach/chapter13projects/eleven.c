#include <stdio.h>

int main(void)
{
    char c, initial;

    printf("Enter a first and last name: ");
    initial = getchar();

    while ((c = getchar()) != ' ')
        ;

    while ((c = getchar()) != '\n')
    {
        putchar(c);
    }

    printf(", %c.\n", initial);

    return 0;
}
