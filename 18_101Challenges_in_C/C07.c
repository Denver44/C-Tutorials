


//****************** WRITE A PROGRAM TO FIND ROT OF QUADRATIC EXPRESSION ******************//



// #include <stdio.h>
// #include<math.h>

// int main()
// {

//     float a, b, c, d, root1, root2;

//     printf("Enter the Co-efficients of Quadratic Xpression:\n");
//     scanf("%f%f%f", &a, &b, &c);

//     d = b * b - 4.0 * a * c;

//     if (d < 0)
//     {
//         printf("no real roots\n");
//     }

//     else
//     {
//         root1 = (-b + sqrt(d)) / (2.0 * a);
//         root2 = (-b - sqrt(d)) / (2.0 * a);

//         printf("Root 1 = %f\n", root1);
//         printf("Root 2 = %f\n", root2);
//     }

//     return 0;
// }


//*************************************************************  ANOTHER WAY OF DOING ******************************************//


#include <stdio.h>
#include <math.h>

int main()
{

    float a, b, c, d, root1, root2;

    printf("Enter the Co-efficients of Quadratic Xpression:\n");
    scanf("%f%f%f", &a, &b, &c);

    d = b*b - 4.0 * a * c;

    if (d >= 0)
    {
        root1 = (-b + sqrt(d)) / (2.0 * a);
        root2 = (-b - sqrt(d)) / (2.0 * a);

        printf("Root 1 = %f\n", root1);
        printf("Root 2 = %f\n", root2);
    }

    else
    {

        printf("no real roots\n");
    }

    return 0;
}