#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
  char *opertaion;
  double base;
  double power; // double is complaosry for the power else output will be wrong.

  opertaion = argv[1];
  base = atoi(argv[2]);
  power = atoi(argv[3]);

  if (strcmp(opertaion, "power") == 0)
  {
    double result = pow(base,power);
    printf("%lf", result);
  }

  return 0;
}

// //*************** INTPUT 1************************
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//   printf("The value of rgc is %d", argc);
//   return 0;
// }
// //*************** OUTPUT 1************************
// //   PS D:\c tutotrial\Tutorial_theory> ./cld.exe durgesh
// // The value of rgc is 2
// //*************** INPUT 2************************
// //   #include<stdio.h>
// // int main(int argc, char const *argv[])
// // {
// //   for (int i = 0; i < argc; i++)
// //   {
// //     printf("This argument at index number %d has a vlue of %s\n", i, argv[i]);
// //   }
// //   return 0;
// //*************** OUTPUT 2************************
// // This argument at index number 0 has a vlue of D:\c tutotrial\Tutorial_theory\cld.exe
// // This argument at index number 1 has a vlue of durgesh
// // }
