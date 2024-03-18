#include <stdio.h>

int main(void)
{
    float radius;

    printf("Input radius of the sphere to calculate it's volume: ");

    scanf("%f", &radius);

    int radius_exponent = radius * radius * radius;
    float pi = 3.142f;
    float constant = 4.0f / 3.0f;

    float value = constant * pi * radius_exponent;

    printf("The volume of a sphere with a 10-meter radius is: %.2f\n", value);

    return 0;
}
