#include <stdio.h>

int main(int argc, char const *argv[])
{
    int hour, minute, user_time,
        t1 = 480,
        t2 = 583,
        t3 = 679,
        t4 = 767,
        t5 = 840,
        t6 = 945,
        t7 = 1140,
        t8 = 1305;
    char str1;

    printf("Enter a 12-hour time: ");
    scanf("%2d :%2d %c", &hour, &minute, &str1);

    if (str1 == 'p' || str1 == 'P')
        hour += 12;

    user_time = hour * 60 + minute;

    printf("Closest departure time is ");

    if (user_time <= t1 + (t2 - t1) / 2)
        printf("8:00 a.m., arriving at 10:16 a.m.\n");
    else if (user_time < t2 + (t3 - t2) / 2)
        printf("9:43 a.m., arriving at 11:52 a.m.\n");
    else if (user_time < t3 + (t4 - t3) / 2)
        printf("11:19 a.m., arriving at 1:31 p.m.\n");
    else if (user_time < t4 + (t5 - t4) / 2)
        printf("12:47 p.m., arriving at 3:00 p.m.\n");
    else if (user_time < t5 + (t6 - t5) / 2)
        printf("2:00 p.m., arriving at 4:08 p.m.\n");
    else if (user_time < t6 + (t7 - t6) / 2)
        printf("3:45 p.m., arriving at 5:55 p.m.\n");
    else if (user_time < t7 + (t8 - t7) / 2)
        printf("7:00 p.m., arriving at 9:20 p.m.\n");
    else
        printf("9:45 p.m., arriving at 11:58 p.m.\n");

    return 0;
}
