#include <stdio.h>
void createarray1(int[3][4]);
void createarray2(int[4][3]);
void printarray1(int[3][4]);
void printarray2(int[4][3]);
void printarray(int[3][3]);
void multiplyarray(int c[3][3] ,int a[3][4],int b[4][3]);
int main()
{
    int arr1[3][4];
    int arr2[4][3];
    int arr3[3][3];

    printf("Enter the Elements for the First Matrix\n");
    createarray1(arr1);
    printf("First Matrix\n");
    printarray1(arr1);
    printf("Enter the Elements for the Second Matrix\n");
    createarray2(arr2);
    printf("Second Matrix\n");
    printarray2(arr2);
    multiplyarray(arr3,arr1, arr2);
    printf("The Multiplication for the 1*2 Matrix\n");
    printarray(arr3);

    return 0;
}
void createarray1(int a[3][4])

{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
void createarray2(int b[4][3])

{

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
}
void printarray1(int a[3][4])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
void printarray2(int a[4][3])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
void multiplyarray(int c[3][3], int a[3][4],int b[4][3])
{
    int sum =0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
            sum =0;
        }
        
    }
    
}
void printarray(int c[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}




