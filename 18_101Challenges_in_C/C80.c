#include <stdio.h>
struct date
{

    unsigned day : 5;
    unsigned month : 4;
    unsigned year : 12;
};

int main()
{
    struct date dt[3], temp;
    int i, j, m, d, y;
    printf("enter the date of joining first date then month then followed by year\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d %d %d", &d, &m, &y);

        if (((d < 1) || (d > 31)) ||
            ((m < 1) || (m > 12)) ||
            ((y < 1960) || (y > 2020)))
        {
            printf("Invalid date enter,enter new date\n");
            i--;
            continue;
        }
        dt[i].day = d;
        dt[i].month = m;
        dt[i].year = y;
    }

    for (i = 0; i < 2; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            if (dt[j].year < dt[i].year)
            {

                temp = dt[i];
                dt[i] = dt[j];
                dt[j] = temp;
            }
        }
    }
    printf("Sorted dated after process are\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d.%d.%d\n", dt[i].day, dt[i].month, dt[i].year);
    }

    return 0;
}