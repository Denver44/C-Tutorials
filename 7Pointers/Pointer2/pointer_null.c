
#include <stdio.h>

int main()
{
    int a = 34;
    int * ptr = NULL; // It is not necessary that a unintiliazed pointer is a null pointer so for safe side we should always make the pointer null if we dont want store address in it.
    if (ptr != NULL){
    printf("The address of a is %d\n", ptr);
    }
    else{
        printf("The pointer is a null pointer and cannot be dereferenced");
    }
    return 0;
}





