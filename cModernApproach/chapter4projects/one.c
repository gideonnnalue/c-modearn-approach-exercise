#include <stdio.h>

int main(void)
{
    int num = 0;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    printf("\n%d%d\n", num % 10, num / 10);

    return 0;
}
