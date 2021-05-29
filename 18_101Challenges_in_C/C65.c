#include <stdio.h>
int main()
{
    int num, n, d3, d2, d1;
    printf("the armstrong number between 1 to 500\n");

    for (num = 1; num <= 500; num++)
    {
        n = num;
        d3 = n % 10;
        n = n / 10;
        d2 = n % 10;
        n = n / 10;

        d1 = n % 10;

        if ((d1 * d1 * d1) + (d2 * d2 * d2) + (d3 * d3 * d3) == num)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}