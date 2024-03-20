#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_LEN 100

int main(void)
{
    char a[MAX_LEN], c, *p = a, *q;
    int len = 0, i = 0;

    printf("Enter a message: ");
    while ((c = tolower(getchar())) != '\n')
        if (isalpha(c))
            *p++ = c;

    p--;

    for (q = a; q < p; p--, q++)
    {
        if (*p != *q)
        {
            printf("Not a palindrome!\n");
            return 0;
        }
    }

    printf("Palindrome!\n");
    return 0;
}