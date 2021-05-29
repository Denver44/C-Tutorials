#include <stdio.h>
int factorial(int);
int main()
{
    int num;
    int result;
    printf("enteer the number of which u want factorial\n");
    scanf("%d", &num);

    result = factorial(num);
    printf("%d", result);
    return 0;
}

int factorial(int num)
{
    int sum;
    if (num == 0)
    {
        return (1);
    }
    else
    {
        sum = num * factorial(num - 1);
    }
    return sum;
}