#include <stdio.h>
#include <conio.h> // this is used to put the the character and it is not standard library
#include <math.h>
#include "C51.h"
int main()
{
    float r, ss, a, b, c;

    printf("Enter the radius of circle\n");
    scanf("%f", &r);

    printf("The Area of circle is %f\n", AREAC(r));
    printf("The PERIMETERR of circle is %f\n", PERIC(r));

    printf("Enter the one side of square\n");
    scanf("%f", &ss);
    printf("The Area of SQUARE is %f\n", AREAS(ss));
    printf("The PERIMETERR of SQUARE is %f\n", PERIS(ss));

    printf("Enter the  all side of A,B,C of Triangle\n");
    scanf("%f%f%f", &a, &b, &c);
    printf("The PERIMETERR of TRIANGLE is %f\n", PERIT(a, b, c));
    printf("The Area of TRIANGLE is %f\n", AREAT(a, b, c));
    printf("enter a key to exit\n");
    getch();

    return 0;
}

//float r, ss, a, b, c, d, e, f, g, h, i;

    // printf("Enter the radius of circle\n");
    // scanf("%f", &r);
    // d = AREAC(r);
    // e = PERIC(r);
    // printf("The Area of circle is %f\n", d);
    // printf("The PERIMETERR of circle is %f\n", PERIC(r));

    // printf("Enter the one side of square\n");
    // scanf("%f", &ss);
    // f = AREAS(ss);
    // g = PERIS(ss);

    // printf("The Area of SQUARE is %f\n", f);
    // printf("The PERIMETERR of SQUARE is %f\n", g);

    // printf("Enter the  all side of A,B,C of Triangle\n");
    // scanf("%f%f%f", &a, &b, &c);

    // h = PERIT(a, b, c);
    // i = AREAT(a, b, c);
    // printf("The PERIMETERR of TRIANGLE is %f\n", h);
    // printf("The Area of TRIANGLE is %f\n", i);