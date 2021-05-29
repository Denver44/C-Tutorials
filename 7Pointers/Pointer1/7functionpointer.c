#include <stdio.h>
void printhello(char *name)
{
    printf("Hello %s\n", name);
}
// int add(int a, int b)
// {

//     return a + b;
// }
int main()
{
    // int (*p)(int, int); // this how e have to declare a function pointer.

    // // p = &add; // assign the address of function add in pointer p
    // p = add; // assign the address of function add in pointer pd

    // // int c = (*p)(1, 1);
    // int c = p(1, 1);
    // printf("%d", c);

    void (*ptr)(char *);
    ptr = printhello;
    ptr("TOM");

    return 0;
}