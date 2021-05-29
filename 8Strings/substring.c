#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int main()
{
   
    char word1[100] = "DURGESH IS A GOOD BOY AS EVERYONE KNOWS IT HE IS ALSO SMART";
    char word2[10] = "KNOWS";
    if (strstr(word1, word2) != NULL) // this strstr is function in whcih we can find a substring is presnet in the string or not
    {
        printf("Word is Present");
    }
    else
        printf("Word is Absent");

    return 0;
}
// strcpy(word1,word2);
// printf("%s",word1);