
//****************** WRITE A PROGRAM TO RECEIVE 5 NUMBER FOR KEYBOARD AND THEN REPORT THE WHICH IS THE BIGGEST NUMBER AMONG THEM ******************//



#include <stdio.h>
int main()
{

    int i, j, k, l, m, big;

    printf("enter the 5 numbers:\n");
    scanf("%d%d%d%d%d", &i, &j, &k, &l, &m);

    big = i;

        if (j > big)
    {
        big = j;
    }

        if (k > big)
    {
        big = k;
    }

        if (l > big)
    {
        big = l;
    }

        if (m > big)
    {
        big = m;
    }

printf(" the biggest value is %d",big);

    return 0;
}