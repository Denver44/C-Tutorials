#include <stdio.h>
int no, var, rem;
int binary = 0;
int i = 1;
int isvalid(int n);
int binaryconversion(int no);
int main()
{

    printf("Enter the number of which u want binary equivalent\n");
    scanf("%d", &no);

    if (isvalid(no))
    {
        binaryconversion(no);
    }

    else
    {
        printf("Inavlid input\n");
    }
    return 0;
}

int isvalid(int n)
{
    if (n >= 0)
    {
        return 1;
    }
    else
        return 0;
}
int binaryconversion(int no)
{

    while (no != 0)
    {
        rem = no % 2;
        no = no / 2;
        binary = binary + (rem * i);
        i = i * 10;
    }
    printf("%d", binary);
}
