#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("7file.txt", "w");
    int a;
    int b;
    printf("enter the values of a and b \n");
    scanf("%d%d", &a, &b);
    fprintf(ptr, "Sum of %d and %d is %d", a, b, a + b); // writing in formatted mode.
    // fprintf(ptr, "DURGESH IS GOOD BOY WE ALL LNOW THAT "); // writing in formatted mode.
    fclose(ptr);

    return 0;
}