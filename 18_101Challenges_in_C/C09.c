#include <stdio.h>
int main()
{

    int d, m;
    printf("ENTER YOUR DATE OF BIRTH AND MONTH\n");
    scanf("%d%d", &d, &m);

    if (d <= 0 || m <= 0)
    {
        printf("its is invalid\n");
    }
    else if (d >= 32 || m >= 12)
    {
        printf("INVALID");
    }

    else if ((d >= 22 && m == 12) || (d <= 19 && m == 1))
    {
        printf("CAPRICORN");
    }

    else if ((d >= 20 && m == 1) || (d <= 17 && m == 2))
    {
        printf("AQUARIUS");
    }

    else if ((d >= 18 && m == 2) || (d <= 19 && m == 3))
    {
        printf("PISCES");
    }
    else if ((d >= 20 && m == 3) || (d <= 19 && m == 4))
    {
        printf("ARIES");
    }
    else if ((d >= 20 && m == 4) || (d <= 20 && m == 5))
    {
        printf("TAURUS");
    }
    else if ((d >= 21 && m == 5) || (d <= 20 && m == 6))
    {
        printf("GEMINI");
    }
    else if ((d >= 21 && m == 6) || (d <= 22 && m == 7))
    {
        printf("CANCER");
    }
    else if ((d >= 23 && m == 7) || (d <= 22 && m == 8))
    {
        printf("LEO");
    }
    else if ((d >= 23 && m == 8) || (d <= 22 && m == 9))
    {
        printf("VIGRO");
    }
    else if ((d >= 23 && m == 9) || (d <= 22 && m == 10))
    {
        printf("LIBRA");
    }
    else if ((d >= 23 && m == 10) || (d <= 21 && m == 11))
    {
        printf("SCORPIO");
    }
    else if ((d >= 22 && m == 11) || (d <= 21 && m == 12))
    {
        printf("SAGITTARIUS");
    }

    return 0;
}