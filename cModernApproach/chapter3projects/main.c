#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);

    printf("\nEnter second fraction: ");
    scanf("%d/%d", &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    printf("\nThe sum is %d/%d\n", result_num, result_denom);
    printf("%-6.2g", .0000009979);

    return 0;
}
