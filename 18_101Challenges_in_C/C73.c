#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int vows = 0;
    int cons = 0;
    int words = 0;
    char *s;

    printf("Enter the string\n");
    fgets(str, 100, stdin);

    s = str;

    while (*s != '\0')
    {
        if (isalpha(*s)) // isalpah check that the charcater is weahtehr a alaphabet or not.
        {
            switch (*s)
            {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                vows++;
                break;

            default:
                cons++;
            }
            s++;
        }
        else if (isspace(*s))  // isspace is a function which is used to check is there any space in the sentences.
        {
            words++;
            s++;
        }

        // else // this block is unnnecssary
        // {
        //     s++;
        // }
    }

    printf("Vowels %d\n", vows);
    printf("Consonant %d\n", cons);
    printf("Total words %d\n", words);
    return 0;
}

//**********************************************************************************

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[100];
//     int i = 0;
//     int vows = 0;
//     int cons = 0;
//     int spaces = 0;
//     int words = 1;

//     printf("Enter the string\n");
//     gets(str);

//     while (str[i] != '\0')
//     {

//         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'|| str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'  )
//             {

//                 vows++;
//                 i++;
//             }
//         else if (str[i] == ' ')
//         {
//             words++;
//             spaces++;
//             i++;
//         }
//         else
//         {
//             cons++;
//             i++;
//         }
//     }

//     printf("Vowels %d\n", vows);
//     printf("Consonant %d\n", cons);
//     printf("Spaces %d\n", spaces);
//     printf("Total words %d\n", words);
//     return 0;
// }