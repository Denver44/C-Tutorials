#include <stdio.h>
int main()
{
    int i, j;

    printf("\t\t\tEnter the number of which u want to multipliactin table upto you want\n\n");
    printf("Enter the value i\n");
    scanf("%d", &i);
    printf("Enter the value of j\n");

    scanf("%d", &j);
    printf("the mulitplication table of %d upto %d are :-\n", i, j);

    for (int k = 1; k <= j; k++)
    {
        printf("%d * %d =  %d\n", i, k, i * k);
    }

    return 0;
}