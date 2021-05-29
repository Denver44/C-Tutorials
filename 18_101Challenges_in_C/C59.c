#include <stdio.h> 
#include <math.h> 
int main()
{
    int x,i;
    float result,term;
    printf("Enter the value of x\n");
    scanf("%d",&x);

if (x<=0)
{
        printf("Invalid:\n");

}
else
{
result = 0;

for ( i = 1; i <= 7; i++)
{
    term = (1.0/i)*pow((x-1.0)/x,i);
    result= result+term;
}

printf("log(%d)  = %f\n",x,result);
    
}
    return 0;
}