#include <stdio.h>
int decimal_to_binary(int);
int main()
{
    int num;
    printf("Enter the decimal number of which u want binary equivalent\n");
    scanf("%d", &num);
    decimal_to_binary(num);
    return 0;
}
int decimal_to_binary(int n)
{
    int r;
    r = n % 2;
    n = n / 2;
    if (n != 0)
    decimal_to_binary(n);
    printf("%d", r);
}
