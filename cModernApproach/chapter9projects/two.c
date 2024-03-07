#include <stdio.h>

float calculate_income_tax(float income);

int main(void)
{
    float income;

    printf("Enter the amount of taxable income: ");
    scanf("%f", &income);

    printf("Your tax due is: %.2f\n", calculate_income_tax(income));

    return 0;
}

float calculate_income_tax(float income)
{
    if (income <= 750.0f)
        return 1 / 100 * income;
    else if (income <= 2250.0f)
        return 2 / 100 * income + 7.50f;
    else if (income <= 3750.0f)
        return 3 / 100 * income + 37.50f;
    else if (income <= 5250.0f)
        return 4 / 100 * income + 82.50f;
    else if (income <= 7000.0f)
        return 5 / 100 * income + 142.50f;
    else
        return 6 / 100 * income + 230.0f;
}