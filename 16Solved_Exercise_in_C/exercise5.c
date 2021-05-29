#include <stdio.h>
# define  MAX 7
void arrayreverse(int *);

int main()
{
    int i;
    int arr[MAX] = {1, 2, 3, 4, 56, 78, 53};
    printf("NORMAL ARRAY\n");

    for (int i = 0; i < MAX; i++)
    {
        printf("%d\t", arr[i]);
    }
    arrayreverse(arr);
       
    return 0;
}

void arrayreverse(int *ptr)
{
    printf("\nREVERSE ARRAY\n");

    for (int i = 0; i < MAX; i++)
    {
        printf("%d\t", ptr[MAX-1 - i]);
    }
}

// ********************************************* ANOTHE CODE OR ANOTHER METHOD *************************************************************************//


// #include <stdio.h>
// // target: 67,6,5,4,3,2,1

// // 7
// // 1,2,3,4,5,6,67
// // 67,2,3,4,5,6,1
// // 67,6,3,4,5,2,1
// // 67,6,5,4,3,2,1


// void arrayRev(int arr[])
// {
//     int temp;
//     for (int i = 0; i < 7/2; i++)
//     {
//         //swap item arr[i] with arr[6-i]
//         temp = arr[i]; 
//         arr[i] = arr[6-i];
//         arr[6-i] = temp;
//     }
// }

// void arrayPrint(int arr[])
// {
//     for (int i = 0; i < 7; i++)
//     {
//         printf("The value of element %d is %d\n", i, arr[i]);
//     }
// }
// int main()
// {
//     int arr[] = {1,2,3,4,5,6,67};
//     printf("Before reversing the array\n");
//     arrayPrint(arr);
//     arrayRev(arr);
//     printf("\nAfter reversing the array\n");
//     arrayPrint(arr);
    
    
//     return 0;
// }
