#include <stdio.h>
#include <stdlib.h>
void display()
{
    printf("Hello world\n");
}
int *add(int *a, int *b)
{
    int *c = (int *)malloc(sizeof(int)); // this c will be store in the heap so it will retain it value and not get removed int stack untill we dont free it
    *c = *a + *b;
    return c;
}
int main()
{
    int a = 2,
        b = 4;
    int *ptr = add(&a, &b);
    display();
    printf("%d", *ptr);
    return 0;
}
