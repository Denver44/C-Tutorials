#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct book
{
    char bookname[21];
    float bookprice;
    int bookpage;
};
struct book input()
{
    struct book b;
    printf("Enter the book name\n");
    gets(b.bookname);
    fflush(stdin);
    printf("Enter the book price\n");
    scanf("%f", &b.bookprice);
    printf("Enter the total pages\n");
    scanf("%d", &b.bookpage);
    return (b);
}
void display(struct book b)
{
    printf("The name of the book is : %s\n", b.bookname);
    printf("Book page %d\n", b.bookpage);
    printf("Book price %.2f rupees\n", b.bookprice);
}
int main()
{
    struct book b1, b2;
    b1 = input();
    display(b1);

    return 0;
}
