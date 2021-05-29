#include <stdio.h>
#include <string.h>
struct employee
{
  char name[20];
  int date;
  int month;
  int year;
};

int main()

{
  struct employee e[5] = {{"Rahul", 19, 11, 1992}, {"Sameer", 24, 6, 1991}, {"Prashant", 22, 11, 1993}, {"sanjay", 12, 12, 1992}, {"sarmishtra", 14, 10, 1992}};
  printf("%s\n", e[1].name);
  printf("%d\n", e[1].date);
  printf("%d\n", e[1].month);
  printf("%d\n", e[1].year);

  return 0;
}