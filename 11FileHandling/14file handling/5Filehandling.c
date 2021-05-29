#include <stdio.h>
#include <conio.h>
struct bookstore
{

    int bookid;
    char title[20];
    float price;
};
int main()
{
    struct bookstore b1,b2;
    printf("Enter the book id please \n");
    scanf("%d", &b1.bookid);
    fflush(stdin);
    printf("Enter the book title please \n");
    gets(b1.title);
    fflush(stdin);
    printf("Enter the book id price \n");
    scanf("%f", &b1.price);
    fflush(stdin);
    

    FILE *fptr;
    fptr = fopen("5flie.txt", "wb");
    // fptr = fopen("4f4.txt", "w");
    fwrite(&b1, sizeof(b1), 1, fptr);
    fclose(fptr);
    return 0;
}