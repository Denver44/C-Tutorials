
// -------------------- FUNCTIONS -------------------------------

#include <stdio.h>
int sum(int a, int b, int c);    /// FUNCTION DECLERATION OF FUNCTION PROTOTYPE
int mul(int a1, int b1, int c1); /// FUNCTION DECLERATION OF FUNCTION PROTOTYPE

int main()
{
  int a, b, a1, b1;
  printf("enter the value of and b of whuch u want addition\n");
  scanf("%d%d", &a, &b);
  int c = sum(a, b, c); // FUNCTION CALL
  printf("%d\n", c);
  printf("enter the value of and b of whuch u want multiplication\n");
  scanf("%d%d", &a1, &b1);
  int c1 = mul(a1, b1, c1); // FUNCTION CALL
  printf("%d\n", c1);
  return 0;
}

int sum(int a, int b, int c) ///  FUNCTION DEFINATION
{

  c = a + b;
  return (c);
}
int mul(int a1, int b1, int c1) /// FUNCTION DEFINATION IT SHOULD BE DITTO SAME AS FUNCTION DECLERTAION
{

  c1 = a1 * b1;
  return (c1);
}
