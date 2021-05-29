#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fptr;
    // fptr = fopen("4file.txt", "w"); // writing mode for the file it will add the line in last.
    // fptr = fopen("4file.txt", "a"); // append mode for the file it will add the line in last.
    fptr = fopen("4file.txt", "a+"); // append+ mode for the file it will add the line in last.
   
    char s[10];
    printf("Enter your Surname\n");
    gets(s);

    fputs("DURGESH ", fptr); // manually
    fputs(s, fptr); // gets fucntion for the string inout in c
    fclose(fptr);

    return 0;
}