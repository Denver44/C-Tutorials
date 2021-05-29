// #include <stdio.h>
// // #include <string.h>

// int main()
// {

//     int BUFFSIZE = 256;
//     char c;
//     char ch[BUFFSIZE];
//     char cha[BUFFSIZE];

//     scanf("%c", &c);
//     scanf("%s\n", ch);     // if we use \n then no nedd to write fflush(stdin)
//     scanf("%[^\n]s", cha); //n this means read untill u dont get new line or enter input.

//     printf("%c\n", c);
//     printf("%s\n", ch);
//     printf("%s", cha);

//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    int i = 0;
    while (s[i] != '\n')
    {

        if (s[i] != ' ')
        {
            printf("%c", s[i]);
            i++;
        }
        else
        {
            printf("\n");
            i++;
        }
    }
    return 0;
}
