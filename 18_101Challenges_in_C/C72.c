// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #define WRONG 0 // MAcros define
// #define CORRECT 1
// char *getsub(char *, int, int); // getsub is pointer which is pointing a char value
// char *leftsub(char *, int);
// char *rightsub(char *, int);
// int main()
// {
//     char string[80] = "Four hundred and thirty two";
//     char *str;
//     printf("String is %s\n", string);
//     str = getsub(string, 5, 7);

//     if (str != NULL)
//     {
//         printf("Substring is %s\n", str);
//         free(str);
//     }

//     str = leftsub(string, 4);

//     if (str != NULL)
//     {
//         printf("Left Substring is %s\n", str);
//         free(str);
//     }

//     str = rightsub(string, 3);
//     if (str != NULL)
//     {
//         printf("Right Substring is %s\n", str);
//         free(str);
//     }

//     return 0;
// }
// char *getsub(char *string, int spos, int n) // as here we get the address of t so thats why we used a char * to store the address and send it to th calling function.
// {

//     int length, input, i;
//     char *t;

//     input = CORRECT;
//     length = strlen(string);

//     if (spos < 0 || spos >= length)
//     {
//         input = WRONG;
//         printf("Strating index out of range");
//     }
//     else if (length <= 0)
//     {
//         input = WRONG;
//         printf("length of substring is invalid");
//     }
//     else if (spos + n - 1 >= length)
//     {
//         input = WRONG;
//         printf("length Out of range");
//     }

//     else
//     {
//         t = (char *)malloc(n + 1);

//         for (i = 0; i < n; i++)
//         {
//             t[i] = string[spos + i];
//         }
//         t[i] = '\0';
//     }

//     if (input == WRONG)
//     {
//         return NULL;
//     }

//     else
//     {

//         return (t);
//     }
// }
// char *leftsub(char *string, int n)
// {
//     int input, i, length;
//     char *t;

//     input = CORRECT;
//     length = strlen(string);

//     if (n < 0 || n > length)
//     {
//         input = WRONG;
//         printf("Length of left substring specifided invalid\n");
//     }
//     else
//     {
//         t = (char *)malloc(n + 1);

//         for (i = 0; i < n; i++)
//         {
//             t[i] = string[i];
//         }
//         t[i] = '\0';
//     }

//     if (input == WRONG)
//     {
//         return NULL;
//     }
//     else
//     {
//         return t;
//     }
// }

// char *rightsub(char *string, int n)
// {
//     int input, i, length;
//     char *t;
//     input = CORRECT;
//     length = strlen(string);
//     if (n < 0 || n > length)
//     {
//         input = WRONG;
//         printf("Length of right substring specifided invalid\n");
//     }
//     else
//     {
//         t = (char *)malloc(n + 1);

//         for (i = 0; i < n; i++)
//         {
//             t[n - i - 1] = string[length - i - 1];
//         }
//         t[i] = '\0';
//     }

//     if (input == WRONG)
//     {
//         return NULL;
//     }
//     else
//     {
//         return t;
//     }
// }

//****************************CONCEPT CLEARING METHOD *************************************************************************
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char s[10]; // making it global varibale
#define WRONG 0 // MAcros define
#define CORRECT 1
char *(getsub)(char *, int, int); // here the getsub is pointed by pointer str so we have to use deresrence opeartor it 
char *leftsub(char *, int);
char *rightsub(char *, int);
int main()
{
    char string[80] = "Four hundred and thirty two";
    char *str;
    printf("String is %s\n", string);
    str = getsub(string, 5, 7); // as here str is pointer which is pointing a fuction so in str the address of function is store

       printf("Substring is %s\n", str); // here we can print the str by retrn type function
    // if (str != NULL)
    // {
    //     free(str);
    // }

    str = leftsub(string, 4);

    if (str != NULL)
    {
        printf("Left Substring is %s\n", str);
        free(str);
    }

    str = rightsub(string, 3);
    if (str != NULL)
    {
        printf("Right Substring is %s\n", str);
        free(str);
    }

    return 0;
}
char *(getsub)(char *string, int spos, int n) // as here we get the address of t so thats why we used a char * to store the address and send it to th calling function.
{

    int length, input, i;
    char t[10];

    input = CORRECT;
    length = strlen(string);

    if (spos < 0 || spos >= length)
    {
        input = WRONG;
        printf("Strating index out of range");
    }
    else if (length <= 0)
    {
        input = WRONG;
        printf("length of substring is invalid");
    }
    else if (spos + n - 1 >= length)
    {
        input = WRONG;
        printf("length Out of range");
    }

    else
    {
       // t = (char *)malloc(n + 1);

        for (i = 0; i < n; i++)
        {
            s[i] = string[spos + i];
        }
        s[i] = '\0';
    }
     return s; // returning s to call function
   // printf("Substring is %s\n", t);

    // if (input == WRONG)
    // {
    //     return 0;
    // }

    // else
    // {

    //     return t;
    // }
}
char *leftsub(char *string, int n)
{
    int input, i, length;
    char *t;

    input = CORRECT;
    length = strlen(string);

    if (n < 0 || n > length)
    {
        input = WRONG;
        printf("Length of left substring specifided invalid\n");
    }
    else
    {
        t = (char *)malloc(n + 1);

        for (i = 0; i < n; i++)
        {
            t[i] = string[i];
        }
        t[i] = '\0';
    }

    if (input == WRONG)
    {
        return NULL;
    }
    else
    {
        return t;
    }
}

char *rightsub(char *string, int n)
{
    int input, i, length;
    char *t;
    input = CORRECT;
    length = strlen(string);
    if (n < 0 || n > length)
    {
        input = WRONG;
        printf("Length of right substring specifided invalid\n");
    }
    else
    {
        t = (char *)malloc(n + 1);

        for (i = 0; i < n; i++)
        {
            t[n - i - 1] = string[length - i - 1];
        }
        t[i] = '\0';
    }

    if (input == WRONG)
    {
        return NULL;
    }
    else
    {
        return t;
    }
}