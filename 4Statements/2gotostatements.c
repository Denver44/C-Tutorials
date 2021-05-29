#include <stdio.h>
// Syntax
// label:
//     printf("we are inside label");
//     goto end;
//     printf("Hello World\n");
//     goto label;
// end:
//     printf("we are at end");
int main()
{
label:
    printf("we are inside label");

    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter the number. enter 0 to exit\n");
            scanf("%d", &num);
            if (num == 0)
            {
                goto end1;
            }
            else
            {
                goto label; // as it see label it will go to label and from there it will re run
                // This is use of goto (But this not use more)
            }
        }
    }
end1:

    return 0;
}
