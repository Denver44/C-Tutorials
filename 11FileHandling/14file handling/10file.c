#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    FILE *ptr;
    char ch;
    ptr = fopen("10.txt", "r");
    if (ptr == NULL)
    {
        printf("Cannot open the file");
        exit(1);
    }
    n = ftell(ptr); // as in reading mode the pointer is always at o
    printf("Begining of the file %d\n", n);
    fseek(ptr, 7, 0); // here i tell fseek to print form start after 6 psoiton.
    // fseek(ptr, -7, 1); // here i tell fseek to print form end .

    // while (1)
    // {
    //     ch = fgetc(ptr);

    //     if (ch == EOF)
    //     {
    //         break;
    //     }

    //     printf("%c", ch);
    // }

    n = ftell(ptr); // as in reading mode the pointer is always at o
    printf("BEFORE PRINTING %d\n", n);
    while (!feof(ptr))
    {
        ch = fgetc(ptr);
        printf("%c", ch);
    }
    n = ftell(ptr); // as in reading mode the pointer is always at o
    printf("\nAfter PRINTING %d\n", n);

    rewind(ptr); // as i have rewinded so the charcater will be printing form the begining if he file.
    while (!feof(ptr))
    {
        ch = fgetc(ptr);
        printf("%c", ch);
    }
    n = ftell(ptr); // as in reading mode the pointer is always at o
    printf("\nAfter rewind %d\n", n);
    return 0;
}