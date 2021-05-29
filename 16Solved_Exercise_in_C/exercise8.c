#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *ptr;
    int n;
    int i = 1;
    while (i <= 3)
    {

        printf("Enter the no of characyers in your ID Employe %d\n",i);
        scanf("%d", &n);
        ptr = (char *)malloc((n + 1) * sizeof(char)); // this main maistake is here that**** n+1 ****as string required one more charcater to store null character.
        printf("Enter your ID \n");
        scanf("%s", ptr); // as the ptr store the address only thats ******** why dont use & *********
        printf("Your ID number is %s", ptr);
        free(ptr);
        i++;
    }

    return 0;
}