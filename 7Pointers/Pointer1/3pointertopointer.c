#include <stdio.h>
int main()
{
    int a = 1025;
    int *p;
    p = &a;
    // pointer to pointer initliazation
    int **q;
    q = &p;
    // pointer to pointer to pointer
    int ***r;
    r = &q;
    printf("Address of a is %d\n", &a);
    printf("value of a is %d\n", a);
    printf("value of p is %d\n", p);
    printf("value of p after derefrencing it *p is %d\n", *p);
    printf("Address of p is %d\n", &p);
    // pointer to pointer.
    printf("value of q is %d\n", q);
    printf("value of q  after derefrencing it  is %d\n", *(*q));
       // pointer to pointer to pointer.
    printf("value of r is %d\n", r);

    printf("value of r  after derefrencing it  is %d\n", *(*(*r)));
 







    return 0;
}