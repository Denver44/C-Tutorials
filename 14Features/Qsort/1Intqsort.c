#include <stdio.h>
#include <stdlib.h>
int comp(const void *pa, const void *pb)
{

    const int *p1 = pa;
    const int *p2 = pb;
    return *p1 - *p2;
}
int main()
{
    int arr[] = {23, 1, 4, 77, 89};
    printf("Before sorting the array elements are\n");
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
    qsort(arr, n, sizeof(arr[0]), comp);
    printf("Before sorting the array elements are\n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }

    return 0;
}