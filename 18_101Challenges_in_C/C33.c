#include <stdio.h>
#include <string.h>
void leng(char *, char *);
void copy(char *, char *);
void cat(char *, char *);
void cmp(char *, char *);
void main()
{

    char s1[] = "durgesh";
    char s2[] = "rai";
    char s3[56];
    int len, len1;

    leng(s1, s2);
    copy(s3, s1);
    cat(s1, s2);
    cmp(s1, s2);

   
}
void leng(char *s1, char *s2)
{
    printf("\n");

    int len, len1;
    printf("String S1 is :- %s\n", s1);
    len1 = strlen(s1);
    printf("Length of string S1 is %d\n", len1);

    printf("String S2 is :- %s\n", s2);
    len = strlen(s2);
    printf("Length of string S2 is %d\n", len);
    printf("\n");
}

void copy(char *s3, char *s1)
{
    strcpy(s3, s1);

    printf("The copy of string1 in string3 %s\n", s3);
    printf("\n");
}

void cat(char *s1, char *s2)
{
    strcat(s1, s2);
    printf("The Addition  of both string is  %s\n", s1);

    printf("\n");
}

void cmp(char *s1, char *s2)
{

    if (strcmp(s1, s2) == 0)

        printf("they are similiar\n");

    else

        printf("they are not similiar\n");
}
