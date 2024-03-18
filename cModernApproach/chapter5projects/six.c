#include <stdio.h>

int main(void)
{
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12);

    int frist_sum = (d2 + d4 + d6 + d8 + d10 + d12) * 3;
    int second_sum = (d1 + d3 + d5 + d7 + d9 + d11) + frist_sum - 1;
    int remainder = 9 - (second_sum % 10);

    if (d12 == remainder)
        printf("VALID\n");
    else
        printf("INVALID\n");

    printf("Check digit: %d\n", remainder);
    return 0;
}
