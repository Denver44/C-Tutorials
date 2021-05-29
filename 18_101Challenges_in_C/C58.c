#include <stdio.h>
int main()
{
    int space, row, col, no, n;
    //int i = 1;
    char name = 'A';

    printf("Enter the number of rows u want\n");
    scanf("%d", &no);
    n = no;

    for (row = 1; row <= no; row++)
    {
        for (space = 1; space <= n; space++)

        {

            printf(" ");
        }
        n--;
        for (col = 1; col <= row; col++)
        {
            // printf("* ");
            // printf("%d ",i);
            // i++;
            printf("%c " ,name);
            name++;
        }

        printf("\n");
    }

    return 0;
}