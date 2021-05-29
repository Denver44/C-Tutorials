#include <stdio.h>
#include <math.h>

// void tri(float, float, float, float *, float *);
// int main()
// {
//     float a, b, c, area, perimeter;
//     printf("enter the three side of triangle A , B, C :\n");
//     scanf("%f%f%f", &a, &b, &c);

//     tri(a, b, c, &area, &perimeter);

//     printf("The area of triangle is %0.2f\n", *&area);
//     printf("The area of perimeter is %0.2f \n",perimeter);
//     return 0;
// }

// void tri(float a, float b, float c, float *area, float *p)
// {
//     float s;

//     s = (a + b + c) / 2;
//     *area = sqrt(s * (s - a) * (s - b) * (s - c));
//     *p = a + b + c;
// }

//***************************************************************************************************************************//

int tri(float, float, float, float *, float *);
void main()
{
    float a, b, c, area, perimeter;
    printf("enter the three side of triangle A , B, C :\n");
    scanf("%f%f%f", &a, &b, &c);

    tri(a, b, c, &area, &perimeter);

}

int tri(float a, float b, float c, float *area, float *p)
{
    float s;

    s = (a + b + c) / 2;
    *area= sqrt(s * (s - a) * (s - b) * (s - c));
    *p = a + b + c;
    printf("The area of triangle is %0.2f\n", *area);
    printf("The area of perimeter is %0.2f \n", *p);

    return 0;
}