#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[80];
    printf("Enter the string details\n");
    fgets(str, 80, stdin); // stdin is main function which helps to read the data.
    printf("%s", str);
    return 0;
}