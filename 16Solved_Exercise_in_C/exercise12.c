#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *replaceword(const char *str, const char *oldword, const char *newword)
{
    char *resultstring;
    int i, count = 0;
    int newwordlength = strlen(newword);
    int oldwordlength = strlen(oldword);

    for (i = 0; str[i] != '\0'; i++)

    {
        printf(" first count %d\n",count);
        if (strstr(&str[i], oldword) == &str[i])
        {
            //printf("%d\n",count);
            count++;
            printf("%d\n",count);
            i = i + oldwordlength - 1;
        }
    }

    resultstring = (char *)malloc(i + count * (newwordlength - oldwordlength) + 1);

    i = 0;
    while (*str)
    {
        if (strstr(str, oldword) == str)
        {
            strcpy(&resultstring[i], newword);
            i += newwordlength;
            str += oldwordlength;
        }
        else
        {
            resultstring[i] = *str;
            i += 1;
            str += 1;
        }
    }

    resultstring[i] = '\0';
    return resultstring;
}
int main()
{
    char name[40];
    char item[30];

    printf("Enter the consumer Detail For Generating Bill :\n");
    printf("Enter the Consumer Name\n");
    scanf("%s", name);
    printf("Enter the Consumer Item which he purchased\n");
    scanf("%s", item);

    FILE *ptr = NULL;
    FILE *ptr2 = NULL;
    ptr = fopen("bill.txt", "r");
    ptr2 = fopen("generatebill.txt", "w");
    char string[200];
    fgets(string, 200, ptr);

    char *newstr;

    newstr = replaceword(string, "{{name}}", name);
    newstr = replaceword(newstr, "{{item}}", item);
    newstr = replaceword(newstr, "{{outlet}}", "JIO DIGITAL");
   // printf("The Generated Bill is :\n%s\n", string);
    fprintf(ptr2, "%s", newstr);
   // printf("The Template Now is:\n%s\n", newstr);
    fclose(ptr);
    fclose(ptr2);
    return 0;
}
