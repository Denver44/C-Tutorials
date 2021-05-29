#include <stdio.h>
#include <math.h>
int main()
{
    int i, a, d1, d2, d3, d4, num, nleft, nright, x, y;

    for (i = 1000; i < 9999; i++)
    {
        a = sqrt((float)i);

        if (i == a * a)
        {
            num = i;

            d4 = num % 10;
            num = num / 10;
            d3 = num % 10;
            num = num / 10;
            d2 = num % 10;
            num = num / 10;
            d1 = num % 10;

            nleft = d1 * 10 + d2;
            nright = d3 * 10 + d4;

            x = sqrt((float)nleft);
            y = sqrt((float)nright);

            if (nleft == x * x && nright == y * y)

                printf("desired number is :- %d\n", i);
        }
    }

    return 0;
}