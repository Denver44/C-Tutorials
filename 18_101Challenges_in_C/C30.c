#include <stdio.h>
#define MAX 5
int main()
{
    int arr[MAX];
    int sum = 0;
    int mean, median;
    int t, i;
    printf("Enter 5 number\n ");

    for (int i = 0; i < MAX; i++)
    {
        scanf("%d", &arr[i]);
    }

// sorting of the number is done
    for (int i = 0; i < MAX; i++)
    {
        for (int j = i + 1; j < MAX; j++)
        {
            if (arr[i] > arr[j])
            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    for (i = 0; i < MAX; i++)
    {
        printf(" %d ", arr[i]);
    }

    for (int i = 0; i < MAX; i++)
    {
        sum = sum + arr[i];
        mean = sum / MAX;
    }

    if (MAX % 2 == 0)
    {
        median = (arr[MAX / 2 - 1] + arr[MAX / 2]) / 2;
    }
    else
    {
        median = arr[(MAX - 1) / 2];
    }

    printf("\nmean is %d\n", mean);
    printf("median is %d\n", median);

    return 0;
}