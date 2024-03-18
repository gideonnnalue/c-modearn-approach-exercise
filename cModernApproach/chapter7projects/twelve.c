#include <stdio.h>

int main(void)
{
    float total = 0.0, num = 0.0;
    char c;

    printf("Enter an expression: ");
    scanf("%f", &total);

    while ((c = getchar()) != '\n')
    {
        switch (c)
        {
        case '+':
            scanf("%f", &num);
            total += num;
            break;
        case '-':
            scanf("%f", &num);
            total -= num;
            break;
        case '*':
            scanf("%f", &num);
            total *= num;
            break;
        case '/':
            scanf("%f", &num);
            total /= num;
            break;
        default:
            break;
        }
    }

    printf("Value of expression: %.2f\n", total);

    return 0;
}
