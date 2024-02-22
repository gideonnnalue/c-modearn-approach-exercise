#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double input, guess = 1.0f, division = 0.0f, average_division = 1.0f;

    printf("Enter a positive number: ");
    scanf("%lf", &input);

    do
    {
        guess = average_division;
        division = input / guess;
        average_division = (guess + division) / 2;
    } while (fabs(guess) != fabs(average_division));


    printf("Square root: %lf\n", average_division);

    return 0;
}
