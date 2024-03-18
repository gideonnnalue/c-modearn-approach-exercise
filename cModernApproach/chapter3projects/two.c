#include <stdio.h>

int main(void)
{
    int item_number, day, month, year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("\nEnter unit price: ");
    scanf("%f", &unit_price);

    printf("\nEnter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("\nItem\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$ %.2f\t\t%.2d/%.2d/%.4d\n", item_number, unit_price, month, day, year);

    return 0;
}
