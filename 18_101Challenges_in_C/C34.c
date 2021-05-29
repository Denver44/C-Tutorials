#include <stdio.h>
int func(int *);
int main()
{

    int arr[5];

    func(arr);
    int num, i;
    printf("enter the  number of which u want searched\n");
    scanf("%d", &num);

    for (i = 1; i <= 5; i++)
    {
        if (arr[i] == num)
            break;
    }
    if (i == 6)

        printf(" the number is not present in this array");

    else

        printf("the numberis at position %d", i);

    return 0;
}

int func(int *arr)
{
    printf("enter the 5 number of which u want sorting\n");

    for (int i = 1; i <= 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    return (*arr);
}