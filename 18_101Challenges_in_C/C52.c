#include <stdio.h>

#define MEAN(x, y) ((x + y) / 2)
#define ABSOLUTEVALUE(x) (x < 0 ? x * -1 : x)
#define UPPERTOLOWER(x) (x + 32)
#define WHOISBIGGERXYZ(x,y,z) (x>y && x>z?x:y>z&&y>x?y:z)
int main()
{
    float a, b;
    int c;
    char d;
    int p,q,r;
    printf("Enter the number a and b to get mean or aveage of boht of them\n");
    scanf("%f%f", &a, &b);
    printf("The average of %0.2f and %0.2f is %0.2f\n", a, b, MEAN(a, b));
    printf("Enter the number of which u want absoulute value \n");
    getchar();
    scanf("%d", &c);
    printf("The absolutevalue of %d is now :-      %d\n", c, ABSOLUTEVALUE(c));
    printf("Enter the character of UPPERCASE u want CONVERT in to LOWERCASE  \n");
    getchar();
    scanf("%c", &d);
    printf("The LOWERCASE OF ALPHABET OF %c is now %c\n", d, UPPERTOLOWER(d));

    printf("Enter the 3 number to check who is bigger among each other \n");
    getchar();
    scanf("%d%d%d", &p,&q,&r);
    printf("The Bigger number among %d %d %d is     %d\n", p,q,r, WHOISBIGGERXYZ(p,q,r));
    return 0;
}