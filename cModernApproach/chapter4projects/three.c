#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2, num3;
    printf("Enter a three-digit number: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    printf("The reversal is: %d%d%d\n", num3, num2, num1);
    return 0;
}
