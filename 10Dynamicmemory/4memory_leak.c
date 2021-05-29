#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i = 0;
    int *ptr;
    while (i < 45545)
    {
        printf("Welcome\n");
        ptr = malloc(34444 * sizeof(int));
        if (i % 100 == 0)
        {
            printf("The value of i is %d\n", i);
            getchar();
        }
        i++;
        free(ptr); // Without this we will encounter a situation of memory leak because our heap memoery will get full. thats why it is important to free that memory after its use.
    }
    return 0;
}
