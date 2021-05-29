#include <stdio.h>

int myfunc(int , int, int, int, int , int);
int main()
{
    int x1, y1, ht, wd, xpt, ypt, p;

    printf("Enter x1,y1,width and height of the rectangle\n");
    scanf("%d%d%d%d", &x1, &y1, &ht, &wd);

    printf("Enter co-ordiantes of point\n");
    scanf("%d%d", &xpt, &ypt);

    p = myfunc(x1, y1, wd, ht, xpt, ypt);

    switch (p)
    {
    case 1:
        printf("point lies outside rectangle\n");
        break;

    case 2:
        printf("point lies inside rectangle\n");
        break;

    case 3:
        printf("point lies on rectangle\n");
        break;
    }

    return 0;
}
int myfunc(int x1, int y1, int wd, int ht, int xpt, int ypt)
{

    int x2, y2;

    x2 = x1 + wd;
    y2 = y1 + ht;

    if (xpt < x1 || xpt > x2 || ypt < y1 || ypt > y2)
    {
        return 1;
    }
    else if (xpt > x1 && xpt < x2 && ypt > y1 && ypt < y2)
    {
        return 2;
    }
    else

        return 3;
}