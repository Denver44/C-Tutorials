#include <stdio.h>

void factor(int, int);
int main()
{
    int num;
    int i;

    printf("Enter the number of which u want prime factors\n");

    scanf("%d", &num);

    if (num <= 1)
    {
        printf("prime factor for number less than and equal to 1 is not possible");
    }

    else
    {
        printf("The prime fcators of %d are :- \n", num);

        factor(num, 2);
    }

    return 0;
}
void factor(int n, int i)
{

    if (i <= n)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);

            n = n / i;
        }
        else
            i++;

        factor(n, i);
    }
}