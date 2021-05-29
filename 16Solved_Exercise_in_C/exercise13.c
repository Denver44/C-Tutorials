#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    char *operation;
    int num1;
    int num2;
    operation = argv[2];  // here the argv[] by given value in the squarke bracket we can decide that at which position we want to use this argument
    num1 = atoi(argv[1]); // atoi is function which convert a string into int function.
    num2 = atoi(argv[3]);

    if (strcmp(operation, "+") == 0)
    {
        printf("%d\n", num1 + num2);
    }
    else if (strcmp(operation, "-") == 0)
    {
        printf("%d\n", num1 - num2);
    }
    else if (strcmp(operation, "X") == 0)
    {
        printf("%d\n", num1 * num2);
    }
    else if (strcmp(operation, "/") == 0)
    {
        printf("%d\n", num1 / num2);
    }


    return 0;
}
