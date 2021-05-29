#include <stdio.h>
#define ROWS 5
#define COLS 5
int minimum(int, int, int);
int submatrix(int[ROWS][COLS]);
int main()
{

    int arr[ROWS][COLS] = {{1, 0, 0, 1, 1}, {0, 1, 1, 1, 0}, {1, 1, 1, 1, 1}, {0, 1, 1, 1, 0}, {0, 0, 0, 1, 1}};

    int max1;

    max1 = submatrix(arr);
    printf("Order of largest sqr sub matrix with all 1s = %d\n",max1);

    return 0;
}
int submatrix(int arr[ROWS][COLS])
{

    int aux[ROWS][COLS] = {0};
    int i, j, min, max;

    for (i = 0; i < COLS; i++)
    {
        aux[0][i] = arr[0][i];
    }
    for (i = 0; i < ROWS; i++)
    {
        aux[i][0] = arr[i][0];
    }

    for (i = 1; i < COLS; i++)
    {
        for (j = 1; j < ROWS; j++)
        {
            if (arr[i][j] == 1)
            {
                min = minimum(aux[i - 1][j - 1], aux[i][j - 1], aux[i - 1][j]);

                aux[i][j] = min + 1;
            }
            else
                aux[i][j] = 0;
        }
    }

    max = 0;
    for (i = 0; i < ROWS; i++)
    {
        for (j = 1; j < COLS; j++)
        {
            if (aux[i][j] > max)
            {

                max = aux[i][j];
            }
            else
                aux[i][j] = 0;
        }
    }

    return max;
}

int minimum(int a, int b, int c)
{

    int min;
    min = a;

    if (b < min)
    {
        min = b;
    }

    if (c < min)
    {
        min = c;
    }
    return min;

}