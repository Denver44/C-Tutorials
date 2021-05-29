#include <stdio.h>
#define ISLOWER(x) (x >= 97 && x <= 122) // MACROS ALWAYS SHOULD BE CAPTIAL LETTER
#define ISUPPER(x) (x >= 65 && x <= 90)
#define ISALPHA(x) (ISLOWER(x) || ISUPPER(x))
#define ADD(x, y) (x + y)
#define BIGGER(x, y) (x > y ? x : y) // #define ISALPHA(x) (x >= 65 && x <= 122)
int main()
{
    char ch;
    int a, b;
    printf("enter a character to check wether it is a lower case or not\n");
    scanf("%c", &ch);

    if (ISLOWER(ch))
    {
        printf("its is a LOWER case\n");
    }
    if (ISUPPER(ch))
    {
        printf("its is a UPPER case\n");
    }
    if (ISALPHA(ch))
    {
        printf("its is a ALPHABET\n");
    }

    printf("enter a Two number to check wether who is big\n");
    scanf("%d%d", &a, &b);

    printf("The bigger number is %d\n", BIGGER(a, b));
    printf("The Adiition of a+b number is %d\n", ADD(a, b));
    return 0;
}