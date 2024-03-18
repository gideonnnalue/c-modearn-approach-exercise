#include <stdio.h>

int main(void)
{
    float amount = 0.0f;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    float tax = (5.0f / 100.0f) * amount;

    printf("\nWith tax added: %.2f\n", amount + tax);

    return 0;
}
