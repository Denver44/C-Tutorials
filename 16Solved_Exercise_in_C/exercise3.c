#include <stdio.h>
#include <stdlib.h>

int iterative(int, int, int);
int recursive(int);

int main()
{
    int firstterm = 0;
    int secondterm = 1;
    int result;
    printf("%d\n", firstterm);

    printf("%d\n", secondterm);
    iterative(firstterm, secondterm, 20);
    int n;
    printf("ENter the index number of which u want fibonaci series\n");
    scanf("%d", &n);
    recursive(n);
    printf("%d", recursive(n));
    return 0;
}
int iterative(int a, int b, int d) // here we send the value of 20 but we have store in some variable name so we have taken d to store that number;
{

    int thirdterm;

    if (d >= 1)
    {
        thirdterm = a + b;
        printf("%d\n", thirdterm);
        d = d - 1;
        iterative(b, thirdterm, d);
    }
}

int recursive(int no) // here we have used recursive approach for the fibonacci series it give the value of number at index positioing sothis method take much time then iterative  so thats reason it not good to use
{
    if (no == 1 || no == 2)
    {
        return no - 1;
    }

    else
        return recursive(no - 1) + recursive(no - 2);
}