#include <stdio.h>
#define MAX 25
int main()
{
    int num[MAX];
    int i, positive, negative, zeros;
     positive = negative = zeros = 0;

    printf("ENTER 25 NUMBER TO CHECK WHICH IS POSITIVE OR ZERO\n");
    for (int i = 0; i < MAX; i++)
    {
        scanf("%d", &num[i]);
    }


    for (int i = 0; i < MAX; i++)
    {

        if (num[i] > 0)

            positive++;

        else if (num[i] == 0)
            zeros++;

        else
            negative++;
    }

    printf("it is positive integer%d\n", positive);
    printf("it is zeros integer%d\n", zeros);
    printf("it is negative integer%d\n", negative);

    return 0;
}