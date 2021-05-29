#include <stdio.h>
#include <math.h>

int main()
{
    float lat1, long1, lat2, long2, d;

    printf("Enter the latitude  of the first place\n");
    scanf("%f", &lat1);
    printf("Enter the latitude  of the second place\n");
    scanf("%f", &lat2);
    printf("Enter the logitude of the first place\n");
    scanf("%f", &long1);
    printf("Enter the  logitude of the second place\n");
    scanf("%f", &long2);
    lat1 = lat1 * 3.14 / 180;
    lat2 = lat2 * 3.14 / 180;
    long1 = long1 * 3.14 / 180;
    long2 = long2 * 3.14 / 180;

    d = 3963 * acos(sin(lat1) * sin(lat2) + cos(lat1) * cos(lat2) * cos(long2 - long1));
    printf("The distance between two place is %0.2f Miles \n", d);

    return 0;
}