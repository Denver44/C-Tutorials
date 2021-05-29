#include <stdio.h>
struct student
{
    int age;
    int roll_no;
    char name[20];

    struct date
    {
        int day, month, year;
    } s;
};
int main()
{
    FILE *ptr;
    ptr = fopen("nested.txt", "r");

    struct student durgesh, harshil;
    fscanf(ptr, "%d %d %s %d %d %s", &durgesh.age, &durgesh.roll_no, durgesh.name, &harshil.age, &harshil.roll_no, harshil.name);
    // fscanf(ptr, "%d %d %s", &harshil.age, &harshil.roll_no, harshil.name);
    // fscanf(ptr, "%d,%d,%d", &durgesh.s.day, &durgesh.s.month, &durgesh.s.year);

    printf("%d,%d,%s\n", durgesh.age, durgesh.roll_no, durgesh.name);
    printf("%d,%d,%s", harshil.age, harshil.roll_no, harshil.name);
    // printf("%d,%d,%d", durgesh.s.day, durgesh.s.month, durgesh.s.year);

    return 0;
}