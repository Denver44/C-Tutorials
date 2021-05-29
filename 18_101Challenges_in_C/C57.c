#include <stdio.h> 
int main()
{
    int first  = 0;
    int second = 1;
    int refresh;

    printf("%d\t",first);
    printf("%d\t",second);
    for (int i = 0; i < 18; i++)
    {
        refresh = first + second;
        printf("%d\t",refresh);
        first = second;
        second = refresh;
    }
    
    return 0;
}