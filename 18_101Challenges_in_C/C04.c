
//****************** WRITE A PROGRAM CURRENCY NOTE FINDER . ******************//

#include <stdio.h>
int main()
{

    int amt, nohun, nofifty, noten, nofive, noone, totalnote;

    printf("Enter the Amount u want to withdraw:");
    scanf("%d", &amt);

    nohun = amt / 100;
    amt = amt % 100;
    nofifty = amt / 50;
    amt = amt % 50;
    noten = amt / 10;
    amt = amt % 10;
    nofive = amt / 5;
    amt = amt % 5;
    noone = amt / 1;
    amt = amt % 5;

    totalnote = nohun + nofifty + noten + nofive + noone;

    printf(" 100 rs note = %d\n", nohun);
    printf(" 50 rs note = %d\n", nofifty);
    printf(" 10 rs note = %d\n", noten);
    printf(" 5 rs note = %d\n", nofive);
    printf(" 1 rs note = %d\n", noone);
    printf(" total notes = %d\n", totalnote);

    return 0;
}