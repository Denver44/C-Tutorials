#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr;
    int a, b, c;
    char ch[100];
    ptr = fopen("8file.txt", "r");
    if (ptr == NULL)
    {
        printf("Cannot open the file\n");
        exit(1);
    }
    fscanf(ptr, "%d %d %d", &a, &b, &c); // diffrent way of reading
    // fscanf(ptr, "%d %d %d", &a, &b, &c);
    printf("%d  %d %d   ", a, b, c);
    printf("%d Aveage of three   ", (a + b + c) / 3);
    fclose(ptr);
    return 0;
}