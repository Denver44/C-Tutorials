#include <stdio.h>
#define MAX 10
#define NOTFOUND 0
#define FOUND 1
int main()
{
    int upper, mid, lower, num, flag;

    int arr[] = {1, 2, 3, 9, 11, 13, 17, 25, 57, 90};

    lower = 0;
    upper = MAX - 1;
    flag = NOTFOUND;

    printf("Enter the number of which u want to check its position in the array\n");
    scanf("%d", &num);

    mid = (lower + upper) / 2;
    while (lower <= upper)
    {
        if (arr[mid] == num)
        {
            printf("number is at %d position\n", mid + 1);
            flag = FOUND;
            break;
        }

        if (arr[mid] > num)
        {
            upper = mid - 1;
        }
        else
            lower = mid + 1;

        mid = (lower + upper) / 2;
    }

    if (flag == NOTFOUND)
    {
        printf("The number is not in this array \n");
    }

    return 0;
}