

//****************** WRITE A PROGRAM TO CHECK WEATHER ITS A LEAP YEAR OR NOT ******************//



#include <stdio.h> 
int main()
{
  
int yr;
printf(" enter the year of which u want to check that it is a leap year  or not\n");
scanf("%d",&yr);

if (yr%4==0)
{
    printf("Its a leap year");
}

else
{
    printf(" it is COMMON year");
}



    return 0;
}