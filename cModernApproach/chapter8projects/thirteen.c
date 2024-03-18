#include <stdio.h>

int main(void)
{
    char c, initial, last_name[20] = {0};
    int i = 0;

    printf("Enter a first and last name: ");
    initial = getchar();

    while ((c = getchar()) != ' ')
        ;

    for (i = 0; (c = getchar()) != '\n'; i++)
        last_name[i] = c;

    printf("You entered the name: ");

    for (i = 0; last_name[i] != '\0'; i++)
        putchar(last_name[i]);
    printf(", %c.\n", initial);

    return 0;
}
