#include <stdio.h>
int main()
{
    float weight;

    printf("KINDLY ENTER YOUR WEIGHT:\n ");
    scanf("%f", &weight);
    weight = weight * 2.204;

    if (weight <= 0)
    {
        printf("INVALID USER");
    }

    else if (weight < 115)
    {
        printf("YOUR WEIGHT IN POUND is : %f\n", weight);
        printf(" SO YOUR BOXING CATEGORY IS : FLYWEIGHT");
    }
    else if (weight >= 115 && weight <= 121)
    {
        printf("YOUR WEIGHT IN POUND is : %f\n", weight);
        printf(" SO YOUR BOXING CATEGORY IS : BANTAMWEIGHT");
    }
    else if (weight >= 122 && weight <= 153)
    {
        printf("YOUR WEIGHT IN POUND is : %f\n", weight);
        printf(" SO YOUR BOXING CATEGORY IS : FEATHERWEIGHT");
    }
    else if (weight >= 154 && weight <= 189)
    {
        printf("YOUR WEIGHT IN POUND is : %f\n", weight);
        printf(" SO YOUR BOXING CATEGORY IS : MIDDLEWEIGHT");
    }
    else if (weight >= 190)
    {
        printf("YOUR WEIGHT IN POUND is : %f\n", weight);
        printf(" SO YOUR BOXING CATEGORY IS : HEAVYWEIGHT");
    }

    return 0;
}
