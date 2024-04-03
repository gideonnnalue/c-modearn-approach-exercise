#include <stdio.h>

struct time
{
    int seconds;
    int minutes;
    int hours;
};

struct time split_time2(long total_seconds)
{

    struct time t;
    t.hours = total_seconds / 3600;
    total_seconds %= 3600;
    t.minutes = total_seconds / 60;
    total_seconds %= 60;
    t.seconds = total_seconds;

    return t;
}

struct time split_time(long total_seconds)
{
    double total_hours = total_seconds / 3600.0f;
    int hours = total_hours;
    double remaining_seconds = total_hours - hours;
    double total_minutes = (remaining_seconds * 3600.0f) / 60.0f;
    int minutes = total_minutes;
    remaining_seconds = total_minutes - minutes;
    int seconds = remaining_seconds * 60;

    return (struct time){seconds, minutes, hours};
}

int main(void)
{
    split_time2(8274.0f);
    return 0;
}