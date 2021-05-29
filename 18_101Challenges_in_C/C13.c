#include <stdio.h> 
#include<math.h>
int main()
{

    float q,r,n,p,a;

for (int i = 1; i <= 10; i++)
{
   printf(" Enter the prinicipal amount\n ");
     scanf("%f",&p);
       printf(" Enter the rate of interest\n ");
     scanf("%f",&r);
       printf(" Enter the number of  year\n ");
     scanf("%f",&n);
       printf(" Enter the compund period \n ");
     scanf("%f",&q);

     a = p* pow( (1+(r/q/100)),(n*q));
       printf(" the total amount %f\n ",a);
}

    return 0;
}