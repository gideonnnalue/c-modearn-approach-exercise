#include <stdio.h>

int main(void)
{
    int GSI, group_identifier, publisher_code, item_number, check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &GSI, &group_identifier, &publisher_code, &item_number, &check_digit);

    printf("\nGSI prefix: %.3d\n", GSI);
    printf("\nGroup identifier: %.1d\n", group_identifier);
    printf("\nPublisher code: %.3d\n", publisher_code);
    printf("\nItem number: %.5d\n", item_number);
    printf("\nCheck digit: %.1d\n", check_digit);
    return 0;
}
