#include <stdio.h>
// #include <ctype.h>

int main(void)
{
    char ch;
    int len = 0;

    printf("Enter a message: ");
    ch = getchar();
    while (ch != '\n')
    {
        len++;
        ch = getchar();
    }
    printf("\nYour message was %d character(s) long \n", len);

    return 0;
}
