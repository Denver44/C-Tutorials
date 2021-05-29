


//****************** WRITE A PROGRAM TO ROUND  OFF AN INTEGER I TO THE NEXT LARGEST MULTIPLE OF ANOTHER INTEGER J. ******************//

#include <stdio.h>

int main()
{

    int i, j, k;

    printf(" enter the off i and j;\n");
    scanf("%d%d", &i, &j);

    k = i + j - i % j;

    printf(" next largest multiple = %d\n", k);

    return 0;
}