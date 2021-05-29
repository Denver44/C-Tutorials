#include <stdio.h>
int lcm(int x, int y);
int gcd(int c, int d);
int main()
{

    int a1, b1;
    printf("ENTER TWO POSITIVE NUMBER OF WHICH U WANT LCM AND GCD\n");
    scanf("%d%d", &a1, &b1);

    int result1, result2;

    result1 = lcm(a1, b1);
    result2 = gcd(a1, b1);

    printf("the lcm is %d and gcd is %d", result1, result2);

    return 0;
}

int lcm(int x, int y)
{
    int result1;

    result1 = x > y ? x : y;

    while (1)
    {
        if (result1 % x == 0 && result1 % y == 0)

            break;
        result1++;
    }
    return (result1);
}

int gcd(int c, int d)
{
    int i, result2;

    for (i = 1; i <= c; i++)
    {
        if (c % i == 0 && d % i == 0)
        {
            result2 = i;
        }
    }

    return (result2);
}