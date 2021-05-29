#include <stdio.h>
#include <stdlib.h>
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
    ptr = fopen("nested.txt", "w");
    struct student durgesh, harshil;
    // struct date s;

    printf("Enter the age of the student\n");
    scanf("%d", &durgesh.age);
    printf("Enter the rollno of the student\n");
    scanf("%d", &durgesh.roll_no);
    printf("Enter the name of the student\n");
    fflush(stdin);
    gets(durgesh.name);
    // fflush(stdin);
    printf("Enter the dob of the student\n");
    scanf("%d %d %d", &durgesh.s.day, &durgesh.s.month, &durgesh.s.year);
    //******************************************************************************************
    printf("Enter the age of the student\n");
    scanf("%d", &harshil.age);
    printf("Enter the rollno of the student\n");
    scanf("%d", &harshil.roll_no);
    printf("Enter the name of the student\n");
    fflush(stdin);
    gets(harshil.name);
    // fflush(stdin);
    printf("Enter the dob of the student\n");
    scanf("%d %d %d", &harshil.s.day, &harshil.s.month, &harshil.s.year);
    //**************************************************************///
    fprintf(ptr, "%d,%d,%s", durgesh.age, durgesh.roll_no, durgesh.name);
    fprintf(ptr, "%d,%d,%d", durgesh.s.day, durgesh.s.month, durgesh.s.year);
    fprintf(ptr, "\n");
    //*********************************************************************************************
    fprintf(ptr, "%d,%d,%s", harshil.age, harshil.roll_no, harshil.name);
    fprintf(ptr, "%d,%d,%d", harshil.s.day, harshil.s.month, harshil.s.year);
    fprintf(ptr, "\n");
    fprintf(ptr, "%d,%d,%d", durgesh.s.day, durgesh.s.month, durgesh.s.year);

    return 0;
}