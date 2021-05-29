#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Edistance(int x1, int y1, int x2, int y2)
{
    int a = (y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1);
    return sqrt(a);
}

float areaOfCircle(int x1, int y1, int x2, int y2, float (*dist)(int x1, int y1, int x2, int y2)) // here the function tskes thevalue of x1 y1 and aslo send the value to edistance so distance is pointer
{

    return dist(x1, y1, x2, y2);
}

int main()
{
    int x1, y1, x2, y2;
    float dst;
    float area;

    printf("Enter the value of x1\n");
    scanf("%d", &x1);

    printf("Enter the value of y1\n");
    scanf("%d", &y1);

    printf("Enter the value of x2\n");
    scanf("%d", &x2);

    printf("Enter the value of y2\n");
    scanf("%d", &y2);
    dst = areaOfCircle(x1, y1, x2, y2, Edistance); // here simply function is call.
    area = dst * dst * 3.14;
    printf("The Area of circle by using Eucldiean formula is %.2f\n", area);

    return 0;
}
