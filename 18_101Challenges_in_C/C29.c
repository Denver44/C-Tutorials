#include <stdio.h>
int main()
{
    int x, y;
    printf("ENTER THE X AND Y CORDINATES OF THE POINT:\n");
    scanf("%d%d", &x, &y);

    if (x == 0 && y == 0)
    {
        printf("THE POINT IS ON ORIGIN\n");
    }

    else if (x != 0 && y == 0)
    {
        printf("THE POINT IS ON X AXIS\n");
    }

    else if (x == 0 && y != 0)
    {
        printf("THE POINT IS ON Y AXIS\n");
    }

    else
    {

        if (x > 0 && y > 0)
        {
            printf("THE POINT IS ON FIRST QUADRANT\n");
        }

        if (x < 0 && y > 0)
        {
            printf("THE POINT IS ON SECOND QUADRANT\n");
        }
        if (x < 0 && y < 0)
        {
            printf("THE POINT IS ON THIRD QUADRANT\n");
        }

        if (x > 0 && y < 0)
        {
            printf("THE POINT IS ON THIRD QUADRANT\n");
        }
    }

    return 0;
}