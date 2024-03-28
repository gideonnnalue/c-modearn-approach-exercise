#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX_LEN 100

bool is_palindrome(const char *message);

int main(void)
{
    char a[MAX_LEN], c, *p = a;

    printf("Enter a message: ");
    while ((c = tolower(getchar())) != '\n')
        if (isalpha(c))
            *p++ = c;
    *p = '\0';

    printf("%sPalindrome!\n", is_palindrome(a) ? "" : "Not a ");

    return 0;
}

bool is_palindrome(const char *message)
{
    const char *first = message, *last = message + strlen(message) - 1;

    // while (*last)
    //     last++;
    // last--;

    while (first < last)
    {
        if (*first != *last)
            return false;
        first++;
        last--;
    }

    return true;
}