#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char str[6] = "Hello";
    char *s = str;
    printf("%c\n",s);
    printf("%c\n",s[0]);
    // printf("%c\n",s[1]);
    // printf("%c\n",str[2]);
    // printf("%c\n",str[3]);
    // printf("%c\n",str[4]);
    
    
    return 0;
}

// int main()
// {
//     char *str;
//     printf("Enter any character\n");
//     scanf("%c", &str);
//     if (isalpha(*str))
//     {
//         printf("Its a alphabet \n");
//     }
//     else
//     {
//         printf("Its a  not alphabet \n");
//     }
    
//     return 0;
// }