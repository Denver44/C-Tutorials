#include <stdio.h>
int main()
{
  int num = 0;
  printf("********************************** 1 IS NOT PRIME OR COMPOSITE NUMBER *************************\n");
  printf("PRIME NUMBER FROM 0 TO 300\n");

  printf("%d\t", num);

  while (num <= 300)
  {
    int i = 2;
    while (i <= num-1)
    {

      if (num % i == 0)
      {

        break;
      }

      else
      {
        i++;
      }
    }

    if (i == num)

      printf("%d\t", num);
    num++;
  }
  return 0;
}