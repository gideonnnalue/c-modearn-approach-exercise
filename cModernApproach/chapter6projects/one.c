#include <stdio.h>

int main(void)
{
    float num = 0.0f, input;

    for (;;)
    {
        printf("Enter a number: ");
        scanf("%f", &input);
        printf("\n");

        if (input <= 0)
            break;
        else if (input > num)
            num = input;
    }

    printf("The largest number entered was %f\n", num);

    return 0;
}
