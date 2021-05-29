#include <stdio.h>
#include <stdlib.h>

int isPalindrome(int num)
{
    int n = num;
    int reverse = 0;

    while (n != 0)
    {
        reverse = reverse * 10 + n % 10;
        n = n / 10;
    }

    if (reverse == num)
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    int number;
    printf("Enter a number to check whether it is a palindrome or not \n");
    scanf("%d", &number);

    if (isPalindrome(number))
    {
        printf(" %d is a Palindrome Number\n", number);
    }
    else
    {
        printf(" %d is a not Palindrome Number\n", number);
    }

    return 0;
}
