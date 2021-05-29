#include <stdio.h>
// --------------------------- USE OF BREAK AND CONTINUE
int main()
{
    printf("Hello World\n");
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("%d\nEnter your age\n", i);
        scanf("%d", &age);
        if (age == 10)
        {
            printf("Your age is 10 so you cannot play");
            break;
        }
        if (age > 10)
        {
            continue;
        }
        printf("we have not come accross any continue statements");
    }

    return 0;
}
