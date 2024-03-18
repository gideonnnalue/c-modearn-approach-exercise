#include <stdio.h>

int main(void)
{
    int num = 0;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    printf("Ther reversal is: %d%d%d\n", num % 10, num / 10 % 10, num / 100);

    return 0;
}
