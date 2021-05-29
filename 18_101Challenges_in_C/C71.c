// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     printf("Enter the string literals\n");

//     char str[80];
//     fgets(str, 80, stdin);
//     char new[80];

//     char *s;
//     char *t;
//     s = str;
//     t = new; // here the charcter save in the new so after that it printed in the last step

//     while (*s != '\0')
//     {

//         switch (*s)
//         {
//         case 'a':
//         case 'A':
//         case 'e':
//         case 'E':
//         case 'i':
//         case 'I':
//         case 'o':
//         case 'O':
//         case 'u':
//         case 'U':
//             s++;
//             break;

//         default:
//             *t = *s;
//             s++;
//             t++; // here also have to increase the address of t so that the another string on another addres.
//         }
//     }
//     *t = '\0';
//     printf("%s", new); // here the character si printed on the string as t = new so all the carcter get store in the array of string.
//     return 0;
// }

//********************************************************* Concept clear method **************************
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = "Durgesh is a good boy and we all know that";
    int i = 0;
    char *s;
    s = str;

    for (i = 0; i < strlen(str); i++)
    {

        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            continue;
        }
        else
        {
            printf("%c", s[i]);
        }
    }
}