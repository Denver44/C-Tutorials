#include <stdio.h>
int main()
{

    int ch;
    float price = 0;
    int wronginput = 1;
    int metertype, numUnits, power;

    printf("Choose the type of Customer:\n");
    printf("1:RESIDENTAL\n");
    printf("2:COMMERCIAL\n");
    printf("3:INDUSTRIAL\n");
    printf("4:AGRICULTURAL\n");
    printf("ENTER YOUR CHOICE:\n");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("ENTER THE TYPE OF METER:\n");
        printf("1: SINGLE PHASE METER\n");
        printf("2: THREE PHASE METER\n");
        printf("ENTER YOUR CHOICE:\n");
        scanf("%d", &metertype);

        switch (metertype)
        {
        case 1:
            price = price + 50;
            break;
        case 2:
            price = price + 200;
            break;

        default:
            wronginput = 1;
        }

        printf("ENTER THE UNITS U HAVE CONSUMED:\n");
        scanf("%d", &numUnits);

        if (numUnits >= 0)
        {
            if (numUnits <= 100)

                price = price + numUnits * 3.76;

            else if (numUnits >= 101 && numUnits <= 300)

                price = price + numUnits * 7.21;

            else if (numUnits >= 301 && numUnits <= 500)

                price = price + numUnits * 9.95;

            else if (numUnits >= 501)

                price = price + numUnits * 11.31;
        }

        else
            wronginput = 1;
        break;

    case 2:

        price = price + 220;
        printf("ENTER NUMBER OF UNITS CONSUMED:\n");
        scanf("%d", &numUnits);

        if (numUnits >= 0)
        {
            if (numUnits <= 200)

                price = price + numUnits * 6.6;
            else

                price = price + numUnits * 9.62;
        }
        else
            wronginput = 1;
        break;

    case 3:

        price = price + 250;
        printf("ENTER AMOUNT OF POWER CONSUMED:\n");
        scanf("%d", &power);

        if (power >= 0)
        {
            if (power <= 20)

                price = price + power * 5.43;
            else

                price = price + power * 6.88;
        }
        else
            wronginput = 1;
        break;

    case 4:

        price = price + 340;
        printf("ENTER AMOUNT OF POWER CONSUMED:\n");
        scanf("%d", &power);

        if (power >= 0)
        {
            if (power <= 5)

                price = price + power * 258;
            else

                price = price + power * 360;
        }
        else
            wronginput = 1;
        break;

    default:
        wronginput == 1;
    }

    if (wronginput == 1)

        printf("TOTAL ELECTRICITY BILL = %f\n", price);

    else

        printf("*********INPUT ENTERED CORRECTLY**********\n");

    return 0;
}