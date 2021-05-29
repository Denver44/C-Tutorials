//---------------------------------------------------use of malloc----------------------------------
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("enter the size of array u want\n");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int)); // A size of n array is created in heap
    for (int i = 0; i < n; i++)           // if u commnet out this loop u will see that the array value will be intiliazed by garbage value.
    {
        printf("Enter the value no %d in array\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of tis array is %d and its address is %u\n", i + 1, ptr[i], &ptr[i]);
    }

    free(ptr); // use of free it use to free the allocated space in the heap
    ptr = NULL;

    return 0;
}