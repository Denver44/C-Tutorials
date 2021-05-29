#include <stdio.h>
int func(int, int, int);
int main()
{

    int row, col, space, no, n;
    printf("Enter the number of row u want for pascal traingle\n");
    scanf("%d", &no);

    for (row = 0; row <= no; row++)
    {
        for (space = 0; space <= (no - row); space++)
        {
            printf(" ");
        }
        n = 1;
        for (col = 0; col <= row; col++)
        {

            printf("%d ", n);
            n = func(n, row, col);
        }
        printf("\n");
    }

    return 0;
}
int func(int n, int row, int col)
{

    n = n * (row - col) / (col + 1);
    return (n);
}