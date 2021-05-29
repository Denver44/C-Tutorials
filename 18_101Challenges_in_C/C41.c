#include <stdio.h>
#define ROWS 3
#define COLS 3
void create(int[][3]);  // herethe column size is manadatory here we have to declare as it is int then it is optionasl to write the name of array
void display(int[][3]); // dont use pointer
void mul(int[][3], int[][3], int[][3]);
int sum = 0;
int main()
{

    int arr1[ROWS][COLS];

    int arr2[ROWS][COLS];
    int arr3[ROWS][COLS];

    printf("Enter the number of elments of both the matrix for which u want muliplication\n");
    printf("\nEnter the elemnets for the matrix \n");
    create(arr1); // here simply write the array name no square bracket needs only put the array name
    display(arr1);
    printf("\nEnter the elemnets for the matrix 2 \n");

    create(arr2); // here simply write the array name no square bracket needs only put the array name
    display(arr2);

    mul(arr3, arr1, arr2);
    display(arr3);

    return 0;
}
void create(int mat[][3])
{
    int i;
    int j;
    //printf("Enter the elemnets for the matrix \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}
void display(int mat[][3])
{
    int i;
    int j;
    printf("the elemnets for the matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}
void mul(int arr3[3][3], int arr1[3][3], int arr2[3][3])
{
    int i,j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            for (k = 0; k < 3; k++)
            {
                sum += arr1[i][k] * arr2[k][j];
            }
            arr3[i][j] = sum;
            sum = 0;
        }
    }
}
