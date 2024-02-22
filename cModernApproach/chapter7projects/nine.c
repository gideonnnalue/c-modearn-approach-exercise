#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    int hour, minute, user_time;
    char str1;

    printf("Enter a 12-hour time: ");
    scanf("%2d :%2d %c", &hour, &minute, &str1);

    if (toupper(str1) == 'P')
        hour += 12;

    printf("Equivalent 24-hour time: %.2d:%.2d\n", hour, minute);

    return 0;
}
