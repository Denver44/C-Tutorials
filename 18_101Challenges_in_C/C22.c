#include <stdio.h>
void func(int, int, int, int, int, int *, int *, int *);
int main()
{
    int n1, n2, n3, n4, n5;
    int sum, product, average;
    printf("ENTER THE FIVE NUMBER OF WHICH U WANT SUM PRODUCT AND AVERAGE\n");
    scanf("%d%d%d%d%d", &n1,&n2, &n3,&n4, &n5);

    func(n1, n2, n3, n4, n5, &sum, &product, &average);

    printf("The sum is %d\n", sum);
    printf("The product is %d\n", product);
    printf("The average is %d\n", average);

    return 0;
}

void func(int f1, int f2, int f3, int f4, int f5, int *s, int *p, int *a)

{
    

    *s = f1 + f2 + f3 + f4 + f5;
    *p = f1 * f2 * f3 * f4 * f5;
    *a = *s / 5;
}
