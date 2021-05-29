#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("file.txt", "r");
    char ch;
    int nol = 0, not = 0, nob = 0, noc = 0;
    while (1)
    {
        ch = fgetc(ptr);
        if (ch == EOF)
        {
            break;
        }
        noc++;
        if (ch == ' ')
        {
            nob++;
        }
        if (ch == '\n')
        {
            nol++;
        }
        if (ch == '\t')
        {
            not++;
        }
    }

    fclose(ptr);
    printf("Number of charcaters = %d\n", noc);
    printf("Number of blanks = %d\n", nob);
    printf("Number of tabs = %d\n", not);
    printf("Number of lines = %d\n", nol);
    return 0;
}