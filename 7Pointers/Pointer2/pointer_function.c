#include <stdio.h>
int sum(int a, int b)
{

    return a + b;
}
int main()
{
    printf("The sum is %d\n", sum(1, 2)); // testing
    int (*fptr)(int, int); // declaring a function
    fptr = &sum; // creating a function pointer 
    int d = (*fptr)(3, 6); // de referncing a function pointer
    printf("The sum is %d\n", d);

    return 0;
}