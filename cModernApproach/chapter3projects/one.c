#include <stdio.h>

int main(void)
{
    int day, month, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("\nYou entered the date %.2d/%.2d/%.4d\n", month, day, year);
    return 0;
}
