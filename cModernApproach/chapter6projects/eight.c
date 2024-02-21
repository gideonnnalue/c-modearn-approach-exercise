#include <stdio.h>

int main(int argc, char const *argv[])
{
    int days, day_of_week;

    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("\nEnter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &day_of_week);
    printf("\n");

    day_of_week--;

    for (int i = 1, j = 0; i <= days + day_of_week; i++, j++)
    {
        if (j == 7)
        {
            printf("\n");
            j = 0;
        }

        if (i <= day_of_week)
            printf("   ");
        else
            printf("%3d", i - day_of_week);
    }

    printf("\n");

    return 0;
}
