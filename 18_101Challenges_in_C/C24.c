#include <stdio.h>
#include <math.h>

float distance(int, int, int, int);
int isTriangleValid(float, float, float);
float areaofTriangel(float, float, float);

int main()
{
    int x1, y1, x2, y2, x3, y3;
    float s1, s2, s3, area;
    int isValid = 0;

    printf("enter the co ordinates of 3 vertices of the triangle:\n");
    printf("first vertex (x,y):\n");
    scanf("%d%d", &x1, &y1);
    printf("second vertex (x,y):\n");
    scanf("%d%d", &x2, &y2);
    printf("third vertex (x,y):\n");
    scanf("%d%d", &x3, &y3);

    s1 = distance(x1, y1, x2, y2);
    s2 = distance(x2, y2, x3, y3);
    s3 = distance(x1, y1, x3, y3);

    printf("length of first side = %f\n", s1);
    printf("length of second side = %f\n", s2);
    printf("length of third side = %f\n", s3);

    isValid = isTriangleValid(s1, s2, s3);

    if (isValid)
    {
        area = areaofTriangel(s1, s2, s3);
        printf("area: %f\n", area);
    }
    else

        printf("the three side do not from traingel\n");

    return 0;
}

float distance(int x1, int y1, int x2, int y2)
{

    float sq;

    sq = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    return sqrt(sq);
}
float areaofTriangel(float s1, float s2, float s3)
{

    float s;
    s = (s1 + s2 + s3) / 2.0;
    return sqrt(s * (s - s1) * (s - s2) * (s - s3));
}

int isTriangleValid(float s1, float s2, float s3)
{

    if (s1 <= 0 || s2 <= 0 || s3 <= 0)
        return 0;
    else if ((s1 + s2 <= s3) || (s2 + s3 <= s1) || (s1 + s3 <= s2))

        return 0;
    else

        return 1;
}
