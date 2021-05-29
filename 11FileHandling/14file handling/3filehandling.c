#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *fptr;
    fptr = fopen("3file.txt", "r");
    char s[100];
    if (fptr == NULL)
    {
        printf("The file is unable to open");
        exit(1);
    }
    fgets(s, 100, fptr);
    printf("%s", s);
    fclose(fptr);
    return 0;
}