struct date
{
    int day;
    int month;
    int year;
};

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