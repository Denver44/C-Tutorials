#include <stdio.h>
int rsum(int);
int main()
{
    int num, sum;
    printf("enter the number of which u want sum\n");
    scanf("%d", &num);
    sum = rsum(num);
    printf("the sum is %d", sum);
    return 0;
}

int rsum(int num)
{

    int digit, sum;
    if (num != 0)
    {

        digit = num % 10;
        num = num / 10;

        sum = digit + rsum(num);
    }
    else
        return 0;

    return (sum);
}



 