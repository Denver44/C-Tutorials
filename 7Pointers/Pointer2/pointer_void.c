#include <stdio.h>
int main()
{
    int a = 345;
    float b = 8.3;
    void *ptr;
    ptr = &a;
    printf("A is  %d\n", *((int *)ptr));
    ptr = &b;
    printf("B is  %f\n", *((float *)ptr));
    return 0;
}
// its is a general purpose pointer.