//----------------------   POINTER AS AN ARGUMENT IN  FUNCTION ------------------------
#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}
int subt(int a, int b)
{
    return a - b;
}

void greetmorningandexecute(int (*fptr)(int, int)) // here morining function take the ptr function and implelmnt the function
{
    int e = 8;
    int f = 8;

    printf("Hello Good Mrning!\n");
    //printf("the sum is %d\n",fptr(5,5)); // this method can also be used
    printf("the sum is %d\n", fptr(e, f));
}
void greeteveningandexecute(int (*fptr)(int, int))
{

    printf("Hello Good Evening!\n");
    printf("the sum is %d\n", fptr(5, 5));
}
int main()
{
    int (*ptr)(int, int);        // declartion of pointer
    ptr = &sum;                  // assign the function name of which u want to call th function it is ur wish to use &.
    int (*ptr2)(int, int);       // declartion of pointer
    ptr2 = &subt;                // assign the function name of which u want to call th function it is ur wish to use &.
    greetmorningandexecute(ptr); // here i have send the ptr function address to morning function
    greeteveningandexecute(ptr2);

    return 0;
}