#include <stdio.h>
#include <string.h>
#define CORRECT 1
#define WRONG 0
int main()
{
    char card[16];
    int input = 0;
    int digit;
    int multiple;
    printf("Enter the card number\n");
    scanf("%s", card);
    input = 1;
    int sum = 0;

    for (int i = 15; i >= 0; i--)
    {
        if (card[i] < '0' || card[i] > '9') // this part help to identify that there is no charcter in the card number.
        {
            input = WRONG;
            break;
        }

        else
            digit = card[i] - '0'; // ascii code we subtract '0'
        if (i % 2 == 0)
        {
            multiple = digit * 2;
            if (multiple >= 10)
            {
                digit = multiple - 9;
            }

            else
                digit = multiple;
        }

        sum = sum + digit;
    }

    if (input == WRONG)
    {
        printf("Credit card number must conatin only digits\n");
    }
    else
    {
        if (sum % 10 == 0)
        {
            printf("Credit card number Valid\n");
        }
        else
        {
            printf("Credit card number Invalid\n");
        }
    }
    return 0;
}