// -------------------------------  1 WITHOUT ARGUMENTS AND WITHOUT RETURN TYPE -------------------------------

#include <stdio.h>
void sum(void); /// FUNCTION DECLERATION OF FUNCTION PROTOTYPE

int main()
{
  sum(); // FUNCTION CALL
}

void sum(void) ///  FUNCTION DEFINATION
{
  int a, b, c;

  printf("enter the value of and b of whuch u want addition\n");
  scanf("%d%d", &a, &b);
  c = a + b;
  printf("%d\n", c);
}
