#include <stdio.h>

int main(int argc, char const *argv[])
{
    int hour, minute;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    printf("\nEquivalent 12-hour time: %.2d:%.2d %s\n", hour > 12 ? hour - 12 : hour, minute, hour >= 12 ? "PM" : "AM");
    

    return 0;
}/* code */
