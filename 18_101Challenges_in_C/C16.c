#include <stdio.h>
int romanise(int, int, char);
int main()
{
    int yr;
    printf("enter the year of which u want to convert in romamn number\n");
    scanf("%d", &yr);

   
        yr = romanise(yr, 1000, 'm');
        yr = romanise(yr, 500, 'd');
        yr = romanise(yr, 100, 'c');
        yr = romanise(yr, 50, 'l');
        yr = romanise(yr, 10, 'x');
        yr = romanise(yr, 5, 'v');
        yr = romanise(yr, 1, 'i');
    
    return 0;
}

int romanise(int y, int k, char ch)
{

    int i, j;

    if (y == 4)
    {
        printf("iv");
        return (y % 4);
    }

    else if (y == 9)
    {
        printf("ix");
        return (y % 9);
    }
    else if (y == 49)
    {
        printf("il");
        return (y % 49);
    }
    else if (y == 99)
    {
        printf("ic");
        return (y % 99);
    }
    else if (y == 499)
    {
        printf("id");
        return (y % 499);
    }
    else if (y == 999)
    {
        printf("im");
        return (y % 999);
    }
    j = y / k;

    for (i = 1; i <= j; i++)

        printf("%c", ch);
    return (y % k);
}
