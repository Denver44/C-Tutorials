#include <stdio.h>
int main()
{
    for (int i = 1; i < 11; i++)
    {

        int num;
        unsigned long int fact = 1;

        printf("ENTER ANY NUMBER\n");
        scanf("%d", &num);
        int i = 1;
        while (i <= num)
        {
            fact = fact * i;
            i++;
        }

        printf("%d\n", fact);
    }
    return 0;
}