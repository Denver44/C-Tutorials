// Declaration - Telling the compiler about the variable (No space reserved)
// Definition - Declaration + space reservation
#include <stdio.h>

int myfunc(int a, int b)
{
    // auto int myVar;              // as by default the storage class is auto so need to write auto
    static int myVar;                 // here the static keyword will store the value after the compeltion of is executuion.
    myVar++;

    printf("The myVar is %d\n", myVar);

    // myVar = a+b;
    return myVar;
}

int main()
{
    int a;
    register int myVar = myfunc(3, 5);
    myVar = myfunc(3, 5);
    myVar = myfunc(3, 5);
    myVar = myfunc(3, 5);
    // printf("The myVar is %d\n", myVar);

    return 0;
}
