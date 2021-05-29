#include <stdio.h>
#include <string.h>
int main()
{
    char *str[] = {"Rajesh",
                   "Ashish",
                   "Milind",
                   "Pushkar",
                   "Akash",
                   "Durgesh"}; // here if we dont us the comma between to words then they will not separted and form as one string without any space.

    // printf("%u\n",str);
    // printf("%u\n",str[0]);
    // printf("%s\n",str[0]);
    // printf("%u",str[1]);
    char *temp;
    int i, j;

    for (int i = 0; i < 6; i++)
    {
        for (j = i + 1; j < 6; j++)
        {
            if ((strcmp(str[i], str[j])) > 0) // strcmp also sort the array by the alpahbericallly order.
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%s\n", str[i]);
    }

    return 0;
}
