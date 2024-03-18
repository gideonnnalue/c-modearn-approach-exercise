#include <stdio.h>

int main(void)
{
    int d1, d2;

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &d1, &d2);

    switch (d1)
    {
    case 2:
        printf("You entered the number twenty");
        break;
    case 3:
        printf("You entered the number thirty");
        break;
    case 4:
        printf("You entered the number fourty");
        break;
    case 5:
        printf("You entered the number fifty");
        break;
    case 6:
        printf("You entered the number sixety");
        break;
    case 7:
        printf("You entered the number seventy");
        break;
    case 8:
        printf("You entered the number eighty");
        break;
    case 9:
        printf("You entered the number ninety");
        break;
    default:
        break;
    }

    if (d1 != 1)
    {
        switch (d2)
        {
        case 1:
            printf("-one");
            break;
        case 2:
            printf("-two");
            break;
        case 3:
            printf("-three");
            break;
        case 4:
            printf("-four");
            break;
        case 5:
            printf("-five");
            break;
        case 6:
            printf("-six");
            break;
        case 7:
            printf("-seven");
            break;
        case 8:
            printf("-eight");
            break;
        case 9:
            printf("-nine");
            break;
        default:
            break;
        }
    }
    else
    {
        switch (d2)
        {
        case 0:
            printf("You entered the number ten");
            break;
        case 1:
            printf("You entered the number eleven");
            break;
        case 2:
            printf("You entered the number twelve");
            break;
        case 3:
            printf("You entered the number thirteen");
            break;
        case 4:
            printf("You entered the number fourteen");
            break;
        case 5:
            printf("You entered the number fifteen");
            break;
        case 6:
            printf("You entered the number sisteen");
            break;
        case 7:
            printf("You entered the number seventeen");
            break;
        case 8:
            printf("You entered the number eighteen");
            break;
        case 9:
            printf("You entered the number nineteen");
            break;
        default:
            break;
        }
    }

    printf("\n");

    return 0;
}
