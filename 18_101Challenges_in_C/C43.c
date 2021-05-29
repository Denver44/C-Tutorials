#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int x1, x2, x3, y1, y2, y3;
    float s1, s2, s3;

    printf("Enter the Co-ordinates of X1 & Y1 of first point\n");
    scanf("%d%d", &x1, &y1);
    printf("Enter the Co-ordinates of X2 & Y2 of second point\n");
    scanf("%d%d", &x2, &y2);
    printf("Enter the Co-ordinates of X3 & Y3 of third point\n");
    scanf("%d%d", &x3, &y3);

    if (x1 == x2 && x2 == x3)
    {
        printf("collinear\n");
    }

    else if (x1 != x2 && x2 != x3 && x3 != x1)
    {
        s1 = (float)abs(y2 - y1) / (float)abs(x2 - x1);
        s2 = (float)abs(y3 - y2) / (float)abs(x3 - x2);
        s3 = (float)abs(y3 - y1) / (float)abs(x3 - x1);

        if (s1 == s2 && s2 == s3)
        {
            printf("collinear\n");
        }

        else
        {
            printf("Noncollinear\n");
        }
    }

    else
    {
        printf("Noncollinear\n");
    }

    return 0;
}