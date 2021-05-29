#include <stdio.h> 
#include"C53.h"


int main()
{
    int principal,year;
    float interest;

    printf("Enter the Principal amount\n");
    scanf("%d",&principal);
    printf("Enter the numner of  year\n");
    scanf("%d",&year);
    printf("Enter the rate of interest \n");
    scanf("%f",&interest);

    printf("the total SIMPLE INTEREST is %f\n",SI(principal,year,interest));
    printf("the total AMOUNT is %f\n",AMT(principal,SI(principal,year,interest)));// here we have used one macro inside a macro so we have to properly addres that macro which we are using inside one macro otherwise it will be error so plaese be careful
    return 0;
}