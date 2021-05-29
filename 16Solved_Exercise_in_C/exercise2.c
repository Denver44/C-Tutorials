#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    char input;
    float km, inches, cms, pound;
    float miles, foot, inche, kgs, meter;

    miles = 0.621371;
    foot = 0.0833333;
    inche = 0.393701;
    kgs = 2.20462;
    meter = 0.0254;

label1:
    system("CLS");
    printf(" WELCOME TO CONVERSATION   TABLE \n");
    printf(" a.kms to miles\n");
    printf(" b.inches to foot\n");
    printf(" c.cms to inches\n");
    printf(" d.pound to kgs\n");
    printf(" e.inches to meters  \n");
    printf(" q.Quit\n");
    printf(" Press the number of which u want converstion table\n");
    scanf("%c", &input);

    switch (input)
    {
    case 'a':
        printf(" Entere the KMS \n");
        scanf("%f", &km);
        printf("%0.2f * %0.2f = %0.2f Miles", km, miles, km * miles);
        break;
    case 'b':
        printf(" Entere the INCHES \n");
        scanf("%f", &inches);
        printf("%0.2f * %0.2f = %0.2f Feet", inches, foot, inches * foot);
        break;
    case 'c':
        printf(" Entere the CMS \n");
        scanf("%f", &cms);
        printf("%0.2f * %0.2f = %0.2f inches", cms, inche, cms * inche);
        break;
    case 'd':
        printf(" Entere the POUND \n");
        scanf("%f", &pound);
        printf("%0.2f / %0.2f = %0.2f KGs", pound, kgs, pound / kgs);
        break;
    case 'e':
        printf(" Entere the INCHES \n");
        scanf("%f", &inches);
        printf("%0.2f * %0.2f = %0.2f Meters", inches, meter, inches * meter);
        break;
    case 'q':
        printf("THANK YOU visit again");
        break;

    default:
        printf("\n\n**********************Inavlid input**********************\n");
        
        printf("\n*****************Please put it again*********************\n\n");
        for (int i = 0; i < 10000; i++)
        {
            for (int j = 0; j < 20000; j++)
            {
            }
        }
        getchar();
        goto label1;
        // break; // her teh need of break statement is no need // continue statement cannot be used here for continue statemnet u have to used it inside a loop.   
        
    }

    return 0;
}