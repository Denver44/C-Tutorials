#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int *reallocptr;

    // ptr = (int *)malloc(sizeof(int)); // using malloc the value are initilaoze by garbage value.
    // ptr = (int *)malloc(10 * sizeof(int));
    ptr = (int *)calloc(10, sizeof(int)); // it will initalize it all value by zero

    // *ptr = 10;
    // *(ptr + 1) = 20;
    // printf("Size of ptr which wiil be alawys %d\n", sizeof(ptr));
    // printf("%d\n", *(ptr + 1));
    // printf("%d\n", *ptr);

    // for (int i = 0; i < 10; i++)
    // {
    //     ptr[i] = i + 1;
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d ", ptr[i]);
    // }
    reallocptr = (int *)realloc(ptr, 5 * sizeof(int)); // it will initalize it all value by zero
    for (int i = 0; i < 5; i++)
    {
        reallocptr[i] = i + 1;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", reallocptr[i]);
    }

    // free(ptr);
    return 0;
}