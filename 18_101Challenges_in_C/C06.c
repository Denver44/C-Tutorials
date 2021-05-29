

//****************** WRITE A PROGRAM TO FIND THE WHICH TYPE OF CHARACTER IT IS A ******************//


#include<stdio.h>
int main(){

char ch;

printf(" enter the character:\n");
scanf("%c",&ch);

if (ch>=65 && ch<=90)
{
    printf("This is a UPPERCASE letter");
}

else if (ch>=97 && ch<=122)
{
    printf("This is a LOWERCASE letter");
}

else if (ch>=48 && ch<=57)
{
    printf("This is a DIGIT");
}

else
{
    printf("its is a symbol");
}


    return 0;
}