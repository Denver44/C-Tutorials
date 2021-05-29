#include <stdio.h>
#include <math.h>
int main()
{
    float x, y, distance, diffx, diffy, radius, pointx, pointy;

    printf("enter the centre of circle\n");
    scanf("%f%f", &x, &y);
    printf("enter the radius of circle\n");
    scanf("%f", &radius);

    printf("enter the co-ordinates of point\n");
    scanf("%f%f", &pointx, &pointy);

    diffx = x - pointx;
    diffy = y - pointy;

    distance = sqrt((diffx * diffx) + (diffy * diffy));

    if (distance == radius)
    {
        printf("point is on the circle\n");
    }
    else if (distance < radius)
    {
        printf("point is on the circle\n");
    }
    else
        printf("point is outside the circle\n");

    return 0;
}