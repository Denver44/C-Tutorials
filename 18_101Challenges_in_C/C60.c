#include <stdio.h>
int main()
{
    float x;
    int i, j;
    float result, term, den, num;
    printf("Enter the value of x\n");
    scanf("%f", &x);
    result = 0;

    for (i = 1; i <= 10; i++)
    {
    num = den = 1.0;
        for (j = 1; j <= i; j++)
        {
            num = num * x;
            den = den * j;
        }
        term = num / den;
        result = result + term;
    }
    printf("%f", result);

    return 0;
}