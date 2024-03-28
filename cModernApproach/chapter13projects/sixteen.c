#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

void reverse(char *message);

int main(void)
{
    char a[MAX_LEN], c, *p = a;

    printf("Enter a message: ");
    while ((c = getchar()) != '\n')
        *(p++) = c;
    *p = '\0';

    reverse(a);
    printf("Reversal is: %s\n", a);

    return 0;
}

void reverse(char *message)
{
    char *first = message;
    char *last = message + strlen(message) - 1;
    char temp;

    while (first < last)
    {
        temp = *first;
        *first = *last;
        *last = temp;
        first++;
        last--;
    }
}