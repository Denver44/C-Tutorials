#include <stdio.h>
int main()
{

    int x, y, t;

    printf("Enter the value of X\n");
    scanf("%d", &x);
    printf("Enter the value of Y\n");
    scanf("%d", &y);

    t = x;
    x = y;
    y = t;

    printf("The location of X and Y is now changed\n");

    printf("The New value of X is %d\n", x);
    printf("The New value of y is %d\n", y);

    return 0;
}