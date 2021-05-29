#include <stdio.h>
#include <math.h>
float power(float x, int y);
int main()
{
    float a;
    float b;
    float c;

    printf("enter the base value:\n");
    scanf("%f", &a);
    printf("enter the power value:\n");
    scanf("%f", &b);
    c = power(a, b);
    printf("the result is %.2f", c);

    return 0;
}
float power(float x, int y)
{

    float z;

    if (y == 1)
    
        return (x);
    

    else if (y == 0)
    
        return (1);
    

    else
    
        z = pow(x, y);

        return (z);
    
}
