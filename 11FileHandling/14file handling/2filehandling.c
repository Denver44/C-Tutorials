#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr;
    ptr = fopen("2file.txt", "r"); //[1] this for reading mode as we have to read the contents of the file and then print it on tht terminal
    char c;

    if (ptr == NULL) //[2] condition checking if there is no file with name of 2file.txt then this loop will execute else not.
    {
        printf("Cannot open the file");
        exit(1);
    }
    else
        c = fgetc(ptr); // the first charcter will get in c
    while (!feof(ptr))  // feof means end of file in brackets we have to give the file name so this will execute till the feof not gets NULL itw ill get 1 as the file gets to NULL
    {
        printf("%c", c);
        c = fgetc(ptr); // this necesary so that the it can point the second charcter.
    }
    fclose(ptr);

    return 0;
}