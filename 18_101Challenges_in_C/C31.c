#include <stdio.h>
#include <math.h>
int main()
{
    int x, y;
    float r, theta;
    printf("Enter the X and Y cordinates of the point\n");
    scanf("%d%d", &x, &y);

    r = sqrt((x * x) + (y * y));
    theta = atan2(y, x);
    theta = theta * 180 / 3.14;

    printf("the radius of the point is %0.2f\n", r);
    printf("the theta of the point is %0.2f\n", theta);

    return 0;
}
