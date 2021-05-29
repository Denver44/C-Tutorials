#include <stdio.h>
#include <string.h>
void print(char *c) // if we put const here we cannt chnage the string afteer then.
{

    // c[0] = 'A'; // we can change the element of the array during the run time if it is declared as a array of charcater
                     //but if it is declared as a const we can change it.
    while (*c != '\0')
    {

        printf("%c", *c);
        c++;
    }
    printf("\n");
}
int main()
{

    //char c[20] = {"Hello"};
    char *c = "Hello";
    print(c);
    return 0;
}