#include <stdio.h>

int main(void)
{
    int num, dig1, dig2, dig3, dig4, dig5;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);

    dig5 = num % 8;
    num = num / 8;

    dig4 = num % 8;
    num = num / 8;

    dig3 = num % 8;
    num = num / 8;

    dig2 = num % 8;
    num = num / 8;

    dig1 = num % 8;
    num = num / 8;

    printf("\nIn octal, your number is: %d%d%d%d%d\n", dig1, dig2, dig3, dig4, dig5);

    return 0;
}
