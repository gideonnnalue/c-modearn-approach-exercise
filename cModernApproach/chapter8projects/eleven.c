#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c, phone_number[15] = {0};
    printf("Enter phone number: ");

    for (int i = 0; i < 15; i++)
        phone_number[i] = getchar();

    for (int i = 0; i < 15; i++)
    {
        switch (toupper(phone_number[i]))
        {
        case 'A':
        case 'B':
        case 'C':
            putchar('2');
            break;
        case 'D':
        case 'E':
        case 'F':
            putchar('3');
            break;
        case 'G':
        case 'H':
        case 'I':
            putchar('4');
            break;
        case 'J':
        case 'K':
        case 'L':
            putchar('5');
            break;
        case 'M':
        case 'N':
        case 'O':
            putchar('6');
            break;
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            putchar('7');
            break;
        case 'T':
        case 'U':
        case 'V':
            putchar('8');
            break;
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            putchar('2');
            break;
        default:
            putchar(phone_number[i]);
            break;
        }
    }

    return 0;
}
