#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};

int day_of_year(struct date d);
int compare_dates(struct date d1, struct date d2);

int main(void)
{
    int result;

    struct date first_date, second_date;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d /%d /%d", &first_date.month, &first_date.day, &first_date.year);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%d /%d /%d", &second_date.month, &second_date.day, &second_date.year);

    result = compare_dates(first_date, second_date);
    if (result == 1)
        printf("%d/%d/%d is earlier than %d/%d/%d\n",
               first_date.month, first_date.day, first_date.year, second_date.month, second_date.day, second_date.year);
    else if (result == -1)
        printf("%d/%d/%d is earlier than %d/%d/%d\n",
               second_date.month, second_date.day, second_date.year, first_date.month, first_date.day, first_date.year);
    else
        printf("%d/%d/%d is equal than %d/%d/%d\n",
               first_date.month, first_date.day, first_date.year, second_date.month, second_date.day, second_date.year);

    return 0;
}

int day_of_year(struct date d)
{
    int res = 0, i;
    const int days_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (d.month > 1 && ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0))
        res++;
    for (i = 0; i < d.month; i++)
        res += days_month[i];
    return res + d.day;
}

int compare_dates(struct date d1, struct date d2)
{
    int day1 = day_of_year(d1);
    int day2 = day_of_year(d2);

    if (day1 < day2)
        return 1;
    else if (day1 > day2)
        return -1;
    else
        return 0;
}