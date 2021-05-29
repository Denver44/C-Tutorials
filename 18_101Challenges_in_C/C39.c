#include <stdio.h>

#define row 3
#define col 3

void creatematrix(int[row][col]);
void displaymatrix(int[row][col]);
void beforedisplaymatrix(int[row][col]);
void transposematrix(int[row][col], int[row][col]);

int main()
{

    int mat[3][3];
    int m[3][3];
    int i, j;

    printf("Enter the element  in row wise for matrix of 3X3  \n");

    printf("\n");
    printf("\n");
    creatematrix(m);
    printf(" REAL MATRIX\n");
    beforedisplaymatrix(m);
    printf(" TRANSPOSE MATRIX\n");
    transposematrix(m, mat);
    displaymatrix(mat);

    return 0;
}

void creatematrix(int m[row][col])
{

    int i, j;

    for (i = 0; i < row; i++)
    {

        for (j = 0; j < col; j++)
        {
            printf("Enter the %d element in %d row\n", j + 1, i + 1);
            // printf("Enter the element %d\n", j);

            scanf("%d", &m[i][j]);
        }
    }
}
void beforedisplaymatrix(int m[row][col])
{
    int i, j;

    for (i = 0; i < row; i++)
    {
        printf("\n");
        for (j = 0; j < col; j++)
        {
            printf("%d\t", m[i][j]);
        }
    }
    printf("\n");
}
void transposematrix(int m[row][col], int mat[row][col])
{
    int i, j;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            mat[i][j] = m[j][i];
        }
    }
}

void displaymatrix(int mat[row][col])
{
    int i, j;

    for (i = 0; i < row; i++)
    {
        printf("\n");
        for (j = 0; j < col; j++)
        {
            printf("%d\t", mat[i][j]);
        }
    }
    printf("\n");
}