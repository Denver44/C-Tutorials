
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int comp(const void *a, const void *b)
{
    // const char **pa = *(const char **)a;
    // const char **pb = *(const char **)b;

    return strcmp(a, b);
}
int main()
{

    char name[][12] = {"durgesh", "priya", "avan", "geeta", "pooja", "darshit"};
    int n = sizeof(name) / sizeof(name[0]);
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", name[i]);
    }
    qsort(name, n, sizeof(name[0]), comp);
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", name[i]);
    }

    return 0;
}
