// ------------------------------- 4 WITH ARGUMENTS AND WITH RETURN TYPE-------------------------------

#include <stdio.h>
int add(int x, int y);
int main()
{
    int a, b, sum;
    printf("enter the value of and b of whuch u want addition\n");
    scanf("%d%d", &a, &b);

    printf("%d\n",  add(a, b));
    return 0;
}
int add(int x, int y)
{

    int c = x + y;
    return (c);
}
