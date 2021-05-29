// dangling means hanging

#include <stdio.h>
#include <stdlib.h> // dynamic memmory are allocated in this library also clear scren function is
int *myfun() 
{
    int a = 10;
    int b = 10;
    int c = a + b;
    return &c; // dangling pointer
}
int main()
{
    // CASE 1
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 1;
    ptr[1] = 10;
    ptr[2] = 100;
    ptr[3] = 1000;
    printf("%d\n", ptr[0]); // HERE U CAN GET THE VALUE OF PTR.
    free(ptr);              // NOW ITS IS DANGLING POINTER
    printf("%d\n", ptr[1]); // HERE WE GET THE OUTPUT WILL BE ANY ADDRESS SO IT CAN CAN CREATE A BUG IN PROGRAM SO IT IS ADIVASABLE TO AMKE THIS DANGLING POINTER AS A NULL POINTER.

    //**********************************************************************************************************************************************************************************
    // CASE 2
    int *ptr1 = myfun();
    printf("%d", ptr1); // here ptr1 become as dangling pointer as the myfun get destoryed after the execution.
    //**********************************************************************************************************************************************************************************
    // CASE 3
    int ptr2;
    {

        int a = 10;
        int *ptr2 = &a;
    }

    printf("%d", ptr2); // AS HERE THE PTR2 WAS IN A LOCAL SCOPE SO THATS WHY IT BCOME AS DANGLING POINTER
    return 0;
}