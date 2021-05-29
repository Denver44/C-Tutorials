// ------------------------------- 3 WITHOUT ARGUMENTS AND WITH RETURN TYPE-------------------------------

#include <stdio.h>
int sum(); /// FUNCTION DECLERATION OF FUNCTION PROTOTYPE

int main()
{
    int add;
    add = sum(); // FUNCTION CALL
    printf("%d\n", add);
    return 0;
}

int sum() ///  FUNCTION DEFINATION
{
    int a, b;
    printf("enter the value of and b of whuch u want addition\n");
    scanf("%d%d", &a, &b);
    int c = a + b;
    return (c);
}
