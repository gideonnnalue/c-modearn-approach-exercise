#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2, num3, num4, high, low, high2, low2;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if (num1 >= num2)
    {
        high = num1;
        low = num2;
    }
    else
    {
        high = num2;
        low = num1;
    }

    if (num3 >= num4)
    {
        high2 = num3;
        low2 = num4;
    }
    else
    {
        high2 = num4;
        low2 = num3;
    }

    if(high >= high2)
        high = high;
    else
        high = high2;

    if(low <= low2)
        low = low;
    else
        low = low2;

    printf("Largest: %d\n", high);
    printf("Smallest: %d\n", low);

    return 0;
}
