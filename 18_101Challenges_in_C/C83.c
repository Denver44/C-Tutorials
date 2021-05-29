#include <stdio.h>
#include <stdlib.h>
int main()
{

    char c;
    int count = 1;
    FILE *ptr;
    ptr = fopen("main.txt", "r");
    printf("\nLine: %d\t", count);
    while (1)
    {
        c = fgetc(ptr);
        if (c == EOF)
        {
            break;
        }
        else if (c == '\n')
        {
            count++;
            printf("\nLine: %d\t", count);
        }
        printf("%c", c);
    }

    return 0;
}
