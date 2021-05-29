#include <stdio.h>
int main()
{
    int s1, s2, s3, a, b, c;

    printf(" ENTER THE THREE SIDES OF TRAINAGLE \n");

    scanf("%d%d%d", &s1, &s2, &s3);

    if (s1 + s2 <= s3 || s2 + s3 <= s1 || s3 + s1 <= s2)
    {
        printf("BOSS IT DOESNOT FORM A TRIANGLE\n");
    }

    if ((s1 != s2) && (s3 != s2) && (s3 != s1))

        printf("SCALENE TRIANGLE\n");

    if (s1 == s2 && (s2 != s3))

        printf("ISOCLECS TRIANGLE\n");

    if (s3 == s2 && (s1 != s3))

        printf("ISOCLECS TRIANGLE\n");

    if (s3 == s1 && (s2 != s1))

        printf("ISOCLECS TRIANGLE\n");
    if ((s1 == s2) && (s3 == s2))

        printf("EQUILATERAL TRIANGLE\n");

    a = (s1 * s1) == (s2 * s2) + (s3 * s3);
    b = (s2 * s2) == (s1 * s1) + (s3 * s3);
    c = (s3 * s3) == (s2 * s2) + (s1 * s1);

    if (a || b || c)

        printf("RIGHT ANGLE TRIANGLE\n");

    return 0;
}