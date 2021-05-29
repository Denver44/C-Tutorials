#include <stdio.h>

#define row 3
#define col 3

void createarray1(int[row][col]);
void displayarray1(int[row][col]);
void createarray2(int[row][col]);
void displayarray2(int[row][col]);
void additionarray(int[row][col], int[row][col], int[row][col]);
int main()
{

    int m1[row][col];
    int m2[row][col];
    int m12[row][col];

    printf("Enter the First matrix\n ");

    createarray1(m1);
    displayarray1(m1);
    printf("\n ");

    printf("Enter the Second matrix\n ");
    printf("\n ");

    createarray2(m2);
    printf("\n ");

    displayarray2(m2);
    printf("\n ");

    additionarray(m12, m1, m2);

    return 0;
}
void createarray1(int m1[row][col])

{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }
    printf("\n ");
}

void displayarray1(int m1[row][col])

{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", m1[i][j]);
        }
        printf("\n ");
    }
}

void createarray2(int m2[row][col])

{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }
    printf("\n ");
}

void displayarray2(int m2[row][col])

{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", m2[i][j]);
        }
        printf("\n ");
    }
}

void additionarray(int m12[row][col], int m1[row][col], int m2[row][col])
{

    int i, j;
    printf("The addition of M1 + M2 =\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {

            m12[i][j] = m1[i][j] + m2[i][j];
            printf("%d\t", m12[i][j]);
        }
        printf("\n ");
    }
}