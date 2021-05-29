
//****************** WRITE A PROGRAM of A0 sheet to A1 to A8. ******************//

#include <stdio.h>

int main()
{

    int a0ht, a0wd, a1ht, a1wd;
    int a2ht, a2wd, a3ht, a3wd;
    int a4ht, a4wd, a5ht, a5wd;
    int a6ht, a6wd, a7ht, a7wd;
    int a8ht, a8wd;

    a0ht = 1189;
    a0wd = 841;

    printf("The A0 paper Height is %d and Width is %d\n", a0ht, a0wd);

    a1ht = a0wd;
    a1wd = a0ht / 2;

    printf("The A1 paper Height is %d and Width is %d\n", a1ht, a1wd);

    a2ht = a1wd;
    a2wd = a1ht / 2;

    printf("The A2 paper Height is %d and Width is %d\n", a2ht, a2wd);

    a3ht = a2wd;
    a3wd = a2ht / 2;

    printf("The A3 paper Height is %d and Width is %d\n", a3ht, a3wd);
    a4ht = a3wd;
    a4wd = a3ht / 2;

    printf("The A4 paper Height is %d and Width is %d\n", a4ht, a4wd);
    a5ht = a4wd;
    a5wd = a4ht / 2;

    printf("The A5 paper Height is %d and Width is %d\n", a5ht, a5wd);
    a6ht = a5wd;
    a6wd = a5ht / 2;

    printf("The A6 paper Height is %d and Width is %d\n", a6ht, a6wd);
    a7ht = a6wd;
    a7wd = a6ht / 2;

    printf("The A7 paper Height is %d and Width is %d\n", a7ht, a7wd);
    a8ht = a7wd;
    a8wd = a7ht / 2;

    printf("The A8 paper Height is %d and Width is %d\n", a8ht, a8wd);

    return 0;
}