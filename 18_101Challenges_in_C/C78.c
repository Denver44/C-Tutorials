#include <stdio.h>
#include <string.h>
#define WRONG 0
#define RIGHT 1
int main()
{
    int input = 0;
    int sum = 0;
    int weight = 10;
    int digit;
    int i;
    char str[10];
    printf("enter the ISBN Number\n");
    scanf("%s", str);

    input = RIGHT;
    for (i = 0; i <= 8; i++)
    {
        if (str[i] >= '0' || str[i] <= '9')
        {
            digit = str[i] - '0';
            sum = sum + weight * digit;
            weight--;
        }
        else
        {
            input = WRONG;
            break;
        }
    }

    if (input == RIGHT)
    {
        if (str[9] >= '0' && str[9] <= '9')
        {
            digit = str[i] - '0';
            sum = sum + digit;
        }

        else if (str[9] == 'x' || str[9] == 'X')
        {
            digit = 10;
            sum = sum + digit;
        }
        else
            input = WRONG;
    }

    if (input == WRONG)

        printf("Invalid ISBN Number\n");

    else
    {
        if (sum % 11 == 0)

            printf("ISBN Number Verified and correct\n");

        else

            printf("Checksum error in ISBN Number\n");
    }

    return 0;
}