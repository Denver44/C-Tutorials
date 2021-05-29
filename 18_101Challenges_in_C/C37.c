#include <stdio.h>
int main()
{

    int i, j, k;
    printf("The pythagroan triplets from 1 to 20\n");

    for (i = 1; i <= 20; i++)
    {
        for (j = 1; j <= 20; j++)
        {
            for (k = 1; k <= 20; k++)
            {
                if (i * i + j * j == k* k)
                {
                    printf("%d  %d  %d\n", i, j, k);
                }
            }
        }
    }

    return 0;
}