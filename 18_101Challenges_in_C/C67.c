#include <stdio.h>
void arrayreverseal(int []);
int main()
{

    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("The array Befor reversing\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", array[i]);
    }
    arrayreverseal(array);
    return 0;
}
void arrayreverseal(int a[])
{

    printf("\nThe array After reversing\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", a[9 - i]);
    }
}