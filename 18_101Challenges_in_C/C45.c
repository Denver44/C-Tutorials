#include <stdio.h>

int rsum(int);
int main()
{
    int max;
    int r;
    printf("Enter the positive largest number for running sum\n");
    scanf("%d", &max);

    if (max < 0)
    {
        printf("The number is negative \n");
    }
    else
        printf("The running sum of positive largest number %d is :- \n", max);
    r = rsum(max);
    printf("%d \n", r);

    return 0;
}
int rsum(int n)
{
    int s;
    if (n == 0)
    {
        return 0;
    }
    else
    {
        s = n + rsum(n - 1);
    }

    return (s);
}
