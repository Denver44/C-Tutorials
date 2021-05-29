#include <stdio.h>
#include <string.h>
struct employee // this should be top so that all function can come under it and so the declare function can be legimate.
{
    char name[20];
    int date;
    int month;
    int year;
};
void sordates(struct employee *, int); // here the * pointer as array name indicate it has the base addres so thats why we used pointer.
void printdate(struct employee *, int);
int comp(struct employee, struct employee);

#define MAX 5
int main()

{
    struct employee e[MAX] = {{"Durgesh", 4, 4, 1999}, {"Geeta", 18, 8, 1983}, {"Pooja", 18, 9, 1996}, {"Avan", 01, 8, 1975}, {"Priya", 03, 03, 1993}};
// here the structure employees with array of person having different date 
    sordates(e, MAX);
    printdate(e, MAX);

    return 0;
}
void sordates(struct employee *e, int size)
{

    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (comp(e[i], e[j]) == 1)
            {
                struct employee t = e[i];
                e[i] = e[j];
                e[j] = t;
            }
        }
    }
}
int comp(struct employee e1, struct employee e2)
{
    if (e1.year < e2.year)
    {
        return 1;
    }
    else if (e1.year > e2.year)
    {
        return 0;
    }
    else
    {
        if (e1.month < e2.month)
        {
            return 1;
        }
        else if (e1.month > e2.month)
        {
            return 0;
        }

        else
        {
            if (e1.date < e2.date)
            {
                return 1;
            }
            else if (e1.date > e2.date)
            {
                return 0;
            }
            else
                return 0;
        }
    }
}

void printdate(struct employee *e, int a)
{
    int i;
    for (i = 0; i < a; i++)
    {
        printf("%s %d.%d.%d\n", e[i].name, e[i].date, e[i].month, e[i].year);
    }
}