#include <stdio.h>
int main()
{
    float a = 0.01, b = 0.005, c = 0.00001, d = 0.01;
    int r1, r2, w1, w2;
    int i;
    printf(" enter the Number of rabits and wolf population \n");
    scanf(" %d%d", &r1, &w1);

    if (r1 < 0 || w1 < 0)
    {
        printf("INVALID INPUT");
    }
    else
    {
        for (i = 1; i <= 1000; i++)
        {
            r2 = (1 + a) * r1 - c * r1 * w1;
            w2 = (1 - b) * w1 + c * d * r1 * w1;

            if (i % 100 == 0)

                printf("After %d days R = %d W =%d\n", i, r2, w2);

            r1 = r2;
            w1 = w2;
        }
    }

    return 0;
}