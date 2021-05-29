#include <stdio.h>
#include <stdlib.h>
struct book
{

    int bokid;
    char title[20];
    float price;
};
int main()
{
    struct book b1;
    FILE *fptr;
   fptr = fopen("5flie.txt", "rb"); // rb menas reading in binary mode.
    // fptr = fopen("4f4.txt", "r");
    if (fptr == NULL)
    {
        printf("file not found\n");
        exit(1);
    }

    while (fread(&b1, sizeof(b1), 1, fptr) > 0)
    {
        printf("BOOK ID :- %d\nBOOK NAME :-  %s\nBOOK PRICE :- %f ", b1.bokid, b1.title, b1.price);
    }
    fclose(fptr);
    return 0;
}