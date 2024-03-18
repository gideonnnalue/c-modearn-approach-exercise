#include <stdio.h>

int main(void)
{
    float n, sum = 0;

    printf("This program sums a series of double.\n");
    printf("Enter integers (0 to terminate): ");

    scanf("%f", &n);
    while (n != 0)
    {
        sum += n;
        scanf("%f", &n);
    }

    printf("\nThe sum is: %f\n", sum);

    return 0;
}
