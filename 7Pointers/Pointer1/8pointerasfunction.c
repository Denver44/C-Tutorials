#include <stdio.h>
int increment(int *x)
{
    *x = *x + 1;
    printf("%d\n",x);
    return *x;
}
int main()
{
    int a;
    a = 10;
    int y = increment(&a);
    printf("%d\n", &a);
    printf("%d\n", y);
    printf("%d\n", a);
    return 0;
}