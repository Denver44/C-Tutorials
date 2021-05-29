#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr;
   // ptr = &arr[0];
    ptr = arr;
    printf("The value of ptr %d\n",ptr );
    printf("The value of ptr after dereferncing %d\n",*ptr );
    printf("The value of ptr after dereferncing %d\n",*(ptr+1) );
    printf("The value of ptr after dereferncing %d\n",*(ptr+2) );
    printf("The value of ptr after dereferncing %d\n",*(ptr+3) );
    printf("The value of ptr after dereferncing %d\n",*(ptr+4) );
    return 0;
}