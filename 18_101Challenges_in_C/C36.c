#include <stdio.h> 
#include <math.h> 
int main()
{
   int num,n,index,rem,oct;

   for (int i = 0; i < 10; i++)
   {
       
   

   printf("enter the number of which u want octal equivalent\n");
   scanf("%d",&num);

   if (num < 0)
   {
       printf("Invalid number\n");
   }

   else
   {
       n = num;
       oct = index = 0;

       while (n>0)
       {
           rem = n%8;
           n= n/8;
           oct = oct + rem * pow(10,index);
           index++;
           
       }
       printf("The octal equivalent of %d is %d\n",num,oct);
       
   }
   
   }
    return 0;
}