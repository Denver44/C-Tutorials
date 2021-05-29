// ------------------------------------------  RECURSIVE FUNTION EXAMPLE ---------------------------------
#include <stdio.h>
int fact(int y);
void main()
{
    int x, y;
    printf("enter the number of which u want factorial\n");
    scanf("%d", &y);
    x = fact(y);
    printf("the factorial of %d is %d\n", y, x);
}

int fact(int y)
{
    int x;
    if (y == 1)
        return (1);
    else
        x = y * fact(y - 1);
    return (x);
}