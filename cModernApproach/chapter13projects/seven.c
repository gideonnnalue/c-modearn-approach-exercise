#include <stdio.h>

int main(void)
{
    int d1, d2;
    char *num_array[] = {"one", "two", "three", "four", "five", "six",
                         "seven", "eight", "nine", "ten", "eleven", "twelve",
                         "thirteen", "fourteen", "fifteen", "sixteen",
                         "seventeen", "eighteen", "nineteen"};

    char *double_num_array[] = {"twenty", "thirty", "fourty", "fifty", "sixety", "seventy", "eighty", "ninety"};

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &d1, &d2);

    printf("You entered the number ");

    if (d1 > 1)
    {
        printf("%s", double_num_array[d1 - 2]);
        if (d2 > 0)
            printf("-%s", num_array[d2 - 1]);
    }
    else
        printf("%s", num_array[d2 + 9]);

    printf("\n");

    return 0;
}
