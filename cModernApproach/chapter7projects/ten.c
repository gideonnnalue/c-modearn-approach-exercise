#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int count = 0;
    char c;

    printf("Enter a sentence: ");

    while ((c = getchar()) != '\n')
    {
        switch (toupper(c))
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            count++;
            break;
        default:
            break;
        }
    }

    printf("Your sentence contains %d vowels\n", count);

    return 0;
}
