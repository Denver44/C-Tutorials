
#include <stdio.h>
#include <conio.h>
#define ROWS 10

int main()
{ // UPWARD PRIYAMID

    for (int i = 1; i <= ROWS; i++) // THIS LOOP DECIDE THE NUMBER OF STSR IN ONE ROW
    {
        for (int j = i; j <= ROWS; j++) // FOR SPACE THIS LOOP IS USED
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) // THIS LOOP IS FOR THE PRINTING
        {
            printf(" *");
        }

        printf("\n");
    }

    // // DOWNWARD PRIYAMID
    for (int i = ROWS; i >= 1; i--)
    {
        for (int j = i; j <= ROWS; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf(" *");
        }

        printf("\n");
    }
    getch();
    return 0;
}