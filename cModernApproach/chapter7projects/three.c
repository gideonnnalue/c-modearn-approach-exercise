#include <stdio.h>

int main(void)
{
    double n, sum = 0;

    printf("This program sums a series of double.\n");
    printf("Enter integers (0 to terminate): ");

    scanf("%lf", &n);
    while (n != 0)
    {
        sum += n;
        scanf("%lf", &n);
    }

    printf("\nThe sum is: %lf\n", sum);

    return 0;
}
