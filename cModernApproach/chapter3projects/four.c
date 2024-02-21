#include <stdio.h>

int main(int argc, char const *argv[])
{
    int country_code, first_number, second_number;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &country_code, &first_number, &second_number);

    printf("\nYou entered %d.%d.%d\n", country_code, first_number, second_number);
    
    return 0;
}
