#include <stdio.h>

int main(int argc, char const *argv[])
{
    float income, total;

    printf("Enter the amount of taxable income: ");
    scanf("%f", &income);

    if (income <= 750.0f)
        total = 1 / 100 * income;
    else if (income <= 2250.0f)
        total = 2 / 100 * income + 7.50f;
    else if (income <= 3750.0f)
        total = 3 / 100 * income + 37.50f;
    else if (income <= 5250.0f)
        total = 4 / 100 * income + 82.50f;
    else if (income <= 7000.0f)
        total = 5 / 100 * income + 142.50f;
    else
        6 / 100 * income + 230.0f;
    
    printf("Your tax due is: %.2f\n", total);
    
    return 0;
}
