#include <stdio.h>
void fibo(int, int, int);
int main()
{

    printf("The first 25 numbers  of fibonacci series \n");
    int t;
    int old = 0;
    int new = 1;
    printf("%d\t", old);

    printf("%d\t", new);
    fibo(old, new, 24); // here as we used 24 in the fiction at ****the time of call*** so we have used *** a term to store this value***
                        // so we can use the value in function

    return 0;
}

void fibo(int old, int new, int terms) // here the 24 is store in the term so please kept in mind if we send number at the function call then used a
                                       //**varivale name to store** the data in the function so that we can use it further
{
    int i;
    int newest;

    if (terms >= 1)
    {
        newest = old + new;
        printf("%d\t", newest);
        terms = terms - 1;
        fibo(new, newest, terms);
    }
}