#include <stdio.h>
int main()
{
    int i;

    printf("*********** DAY 1 ***********************\n");
    for (i = 0; i <= 23; i++)
    {

        if (i == 0)
        {
            printf("12 MIDNIGHT\n");
            continue;
        }

        if (i < 12)
        {
            printf("%d AM\n", i);
        }

        if (i == 12)

        {
            printf("12 NOON\n");
        }

        if (i > 12)

        {
            printf("%d PM\n", i);
        }
    }

    return 0;
}