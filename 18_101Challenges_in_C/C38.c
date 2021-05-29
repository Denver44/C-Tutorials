#include <stdio.h>
#define notequal 0
#define equal 1

int compare(int *, int, int *, int);

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};
    int arr3[] = {1, 2, 6, 4, 5};
    int arr4[] = {1, 2, 3, 4, 5};

    int result;
    result = compare(arr1, 5, arr2, 5);

    if (result == equal)
    {
        printf("Both arr1 and arr2  are equal\n");
    }
    else
    {
        printf("Both arr1 and arr2 are notequal\n");
    }

    result = compare(arr1, 5, arr3, 5);

    if (result == equal)
    {
        printf("Both arr1 and arr3 are equal\n");
    }
    else
    {
        printf("Both arr1 and arr3 are notequal\n");
    }

    result = compare(arr1, 5, arr4, 5);

    if (result == equal)
    {
        printf("Both arr1 and arr4 are equal\n");
    }
    else
    {
        printf("Both arr1 and arr4 are notequal\n");
    }

    result = compare(arr2, 5, arr3, 4);

    if (result == equal)
    {
        printf("Both arr4 and arr2 are equal\n");
    }
    else
    {
        printf("Both arr4 and arr2 are notequal\n");
    }
}

int compare(int *arr1, int sz1, int *arr2, int sz2)
{

    if (sz1 != sz2)
    {
        return notequal;
    }
    else
    {
        for (int i = 0; i < sz1; i++)
        {
            if (arr1[i] != arr2[i])
            {
                return notequal;
            }
        }

        return equal;
    }
}