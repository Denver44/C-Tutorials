#include <stdio.h>
#include <stdlib.h>
#define MAX 10
void getdata();
void sortbyavg();
void printdata();
int comp_fun(const void *, const void *);
struct cric_player
{

    char name[20];
    int age;
    int notest;
    int avg;
};
struct cric_player cp[MAX];
int main()
{
    getdata();
    sortbyavg();
    printdata();

    return 0;
}
void getdata()
{

    for (int i = 0; i < MAX; i++)
    {
        printf("Enter the Name Age No.of test and average of %d\n", i + 1);
        scanf("%s %d %d %d", &cp[i].name, &cp[i].age, &cp[i].notest, &cp[i].avg);
    }
}
void printdata()
{
    printf(" Name   Age    No.of test   Average \n");
    for (int i = 0; i < MAX; i++)
    {
        printf("%s  %d      %d        %d\n", cp[i].name, cp[i].age, cp[i].notest, cp[i].avg);
    }
}
void sortbyavg()
{
    //  struct cric_player t;
    qsort(cp, MAX, sizeof(cp[0]), comp_fun);
    // qsort((struct cric_player *)cp, MAX, sizeof(cp[0]), comp_fun);
}
int comp_fun(const void *p1, const void *p2)
{
    const struct cric_player *pa = p1;
    const struct cric_player *pb = p2;
    return pa->avg - pb->avg;
}
// int comp_fun(const void *p1, const void *p2)
// {
//     float avg1, avg2;
//     avg1 = ((struct cric_player *)p1)->avg;
//     avg2 = ((struct cric_player *)p2)->avg;
//     return avg1 - avg2;
// }