// ------------------------------- 2 WITH ARGUMENTS AND WITHOUT RETURN TYPE-------------------------------

#include <stdio.h>
void sum(int a, int b); /// FUNCTION DECLERATION OF FUNCTION PROTOTYPE

int main()
{
    int a, b;
    printf("enter the value of and b of whuch u want addition\n");
    scanf("%d%d", &a, &b);
    sum(a, b ); // FUNCTION CALL
}

void sum(int a, int b) ///  FUNCTION DEFINATION
{

    int c = a + b;
    printf("%d\n", c);
}
