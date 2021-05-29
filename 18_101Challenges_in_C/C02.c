
//****************** WRITE A PROGRAM TO CONVERT KG IN GRAM,QUINTALS,TONS,POUND. ******************//


#include <stdio.h>

int main()
{

    float kg, g, qt, ton, lbs;

    printf("Enter the weight of the body in KILOGRAMS:\n");
    scanf("%f", &kg);

    g = kg * 1000;
    qt = kg / 100;
    ton = kg / 1000;
    lbs = kg * 2.204;

    printf("The weight of the body in Gram is : %f\n", g);
    printf("The weight of the body in Quintals is :%f\n", qt);
    printf("The weight of the body in Tons is :%f\n", ton);
    printf("The weight of the body in Pound is :%f\n", lbs);

    return 0;
}