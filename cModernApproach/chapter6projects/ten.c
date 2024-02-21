#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m1, d1, y1, m2, d2, y2;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d /%d /%d", &m1, &d1, &y1);

    m2 = m1;
    d2 = d1;
    y2 = y1;

    while (1)
    {
        if (m1 == 0 && d1 == 0 && y1 == 0)
            break;

        if (y1 < y2 || (y1 == y2 && m1 < m2) || (y1 == y2 && m1 == m2 && d1 < d2))
        {
            y2 = y1;
            m2 = m1;
            d2 = d1;
        }

        printf("Enter a date (mm/dd/yy): ");
        scanf("%d /%d /%d", &m1, &d1, &y1);
    }

    printf("%d/%d/%.2d is the earliest date\n", m2, d2, y2);

    return 0;
}
