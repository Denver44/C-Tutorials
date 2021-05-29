#include <stdio.h>
#include <stdlib.h>
int main()
{

    int *ptr;
    int n;
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

    // use of realloc

    printf("enter the new size of array u want\n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int)); // now the same ptr will get a new address in it from heap.
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d in array\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of tis array is %d\n", i + 1, ptr[i]);
        printf("The value at %d of tis array is %u\n", i + 1, &ptr[i]); //it shouw the address are continous store.
    }
    printf("%d\n", sizeof(ptr));

    // use of free
    free(ptr);

    return 0;
}