#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma pack(1)
struct book
{
    char bookname[20];
    float bookprice;
    int bookpage;
};

int main()
{
    struct book b[2];

    printf(" size of struct %d\n", sizeof(struct book));
    for (int i = 0; i < 2; i++)
    {
        printf("Enter the book %d name then Book price and last total pages\n", i + 1);
        scanf("%s %f %d", &b[i].bookname, &b[i].bookprice, &b[i].bookpage);
    }
    for (int i = 0; i < 2; i++)
    {
        printf(" %d Book name %s\n", i + 1, b[i].bookname);
        printf(" %d Book name %u\n", i + 1, b[i].bookname);
        printf(" Book price %.2f rupees\n", b[i].bookprice);

        printf(" Book pages %d\n", b[i].bookpage);
    }

    return 0;
}
