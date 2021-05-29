#include <stdio.h>
#include "C54.h"
int main()
{
    float x;
    int p, q;
    printf("Enter  a degree of which u want to converrt in radian\n");
    scanf("%f", &x);
    printf("The radian is %0.2f\n", RADIAN(x));

    printf("The degree is %0.2f\n", DEGREE(RADIAN(x)));

    printf("Enter  a number of which u want nearest odd integer\n");
    scanf("%d", &p);
    printf("The NEAREST ODD INTEGER is %d\n", ODD(p));

    printf("Enter  a number of which u want nearest even integer\n");
    scanf("%d", &q);
    printf("The NEAREST EVEN INTEGER is %d\n", EVEN(q));

    return 0;
}