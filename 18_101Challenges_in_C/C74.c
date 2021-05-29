#include <stdio.h>
#include <string.h>
char strev(char *);
int main()
{
    char s[][100] = {"To err is human",
                     "But to really mess things up",
                     "One needs to know C"};
     printf("%s\n", s[0]);
     printf("%s\n", s[1]);
     printf("%s\n", s[2]);
     printf("\nString Reversal look like\n\n");

    for (int i = 0; i < 3; i++)
    {
        strev(s[i]);
        //  printf("%s\n", s[i]);
    }

    return 0;
}
char strev(char *string)
{

    int begin = 0;
    int end;
    end = strlen(string) - 1;

    while (begin < end)
    {
        char ch = string[begin];
        string[begin] = string[end];
        string[end] = ch;
        begin++;
        end--;
    }
}