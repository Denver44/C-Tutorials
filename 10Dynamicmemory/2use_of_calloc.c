#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("The size of ptr is : %d\n", sizeof(ptr));
    printf("enter the size of array u want\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int)); // A size of n array is created in heap
    for (int i = 0; i < n; i++)          // if u commnet out this loop u will see that the array value will be intiliazed by 0 value this onl;y diff between malloc and calloc that all value initalzed with zero in calloc and wheres in malloc all will be initialized with garbage value.
    {
        printf("Enter the value no %d in array\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of tis array is %d and its address is %u\n", i + 1, ptr[i], &ptr[i]);
    }
    free(ptr); // here using the free ptr the value stored in the memmory get destory.

    return 0;
}