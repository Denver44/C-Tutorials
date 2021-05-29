#include <stdio.h>
void func(int (*A)[2][2])// ARGUMENT 3D array of integers.
{


}
int main()
{
    int c[3][2][2] = {{{2, 3}, {7, 9}}, {{3, 4}, {6, 1}}, {{0, 8}, {11, 13}}};

    func(c);

    return 0;
}
//*************************** 2D ARRAY AS FUNCTION
// void func(int (*A)[2])// ARGUMENT 2D array of integers.
// {

    
// }
// int main()
// {
//     int b[2][2] = {{2, 3}, {7, 9}};

//     func(b);

//     return 0;
// }
//*********************** 1D ARRAY OF INTEGERS**//
void func(int *A)// ARGUMENT 1D array of integers.
{

    
}
int main()
{
    int c[3]= {2, 4,3};

    func(c);

    return 0;
}