#include <stdio.h>

int calculate_polynomial(int x);
int power(int x, int pow);

int main(void)
{
    int x, result;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    result = calculate_polynomial(2);

    printf("%d\n", result);

    return 0;
}

int calculate_polynomial(int x)
{
    return 3 * power(x, 5) + 2 * power(x, 4) - 5 * power(x, 3) - power(x, 2) + 7 * x - 6;
}

int power(int x, int pow)
{
    if (pow == 0)
        return 1;

    return x * power(x, --pow);
}