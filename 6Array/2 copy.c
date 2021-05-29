// ---------------------------------------- ARRAY  DEEP CONCEPTS -------------------------------
#include <stdio.h>
int fun(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        printf("POINTER POINT THAT ARRAY ADDRESS %u\n", arr); // here the ddress wil be same as the pointer only takes 4 bytes and its a pointer which pointnig a array of 5 integer.

        sum = sum + *arr;
        arr++;
    }
    return sum;
    printf("%d\n", sum);
}
int main()
{

    int a[5] = {1, 2, 1, 2, 1};
    int *ptr; // here the ptr is apointer pointing a array so thats why its size will only 4bytes so thats why it address doesnt change in upper function.
    int *pt[] = {a, a + 1, a + 2, a + 3, a + 4};
    ptr = &a[0]; // write like this or simply write then name of array without using ampersand.
    int i;
    printf("ARRAY OF POINTER ADDRESS %u\n", pt);
    printf("ARRAY OF POINTER ADDRESS %u\n", *pt);
    printf("ARRAY OF POINTER ADDRESS %u\n", *(*pt)); // here the *(*ptr) will give the value which is stored in it by dereefcing it two times it will give he value of a .
    printf("ARRAY OF POINTER Value %d\n", *pt[0]);
    printf("ARRAY ADDRESS %u\n", &a[0]);
    printf("ARRAY ADDRESS %u\n", &a[1]);
    printf("ARRAY ADDRESS %u\n", &a[2]);
    printf("ARRAY ADDRESS %u\n", &a[3]);
    printf("ARRAY ADDRESS %u\n", &a[4]);
    printf("ARRAY ADDRESS %u\n", &ptr);

    int c = fun(ptr, 5);
    printf("%d\n", c);
    return 0;
}
// ----------------------------------------------------- ------------------------------------------------------------
// void fun(int arr)
// {

//     printf("%d\n", arr);
// }
// int main()
// {
//     int a[5] = {12, 11, 13, 14, 15};
//     int i;
//     for (int i = 0; i < 5; i++)
//     {
//         fun(a[i]);
//     }

//     return 0;
// }
// ------------------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// int main()
// {
//     int a[5];
//     int sum = 0;
//     int average;
//     printf("enter the five marks which u want to store in array\n");

//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &a[i]);
//         sum = sum + a[i];
//     }

//     average = sum / 5;
//     printf("the sum is %d\n", sum);
//     printf("the average is %d", average);

//     return 0;
// }

//********************** 2D ARRAY *****************************************//

// #include <stdio.h>
// int main()
// {
//     int a[2][2];

//     printf("enter the number which u want to store in matrix from of 2x2\n");

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("%d \t", a[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
