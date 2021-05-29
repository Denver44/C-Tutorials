#include <stdio.h>
#include <string.h>

    struct lic
    {
        unsigned gender : 1;  // here colon operator is used 
        unsigned status : 1;
        char name[20];
        unsigned duration;
    };
int main()
{
    struct lic people1;
    int g, s, y;
    char n[20];
    
    printf("Enter the your gender by choosing :- 0 for Male || 1 for Female\n");
    scanf("%d", &g);
    printf("Enter the your status by choosing :- 0 for Minor || 1 for Major\n");
    scanf("%d", &s);
    printf("Enter the your name \n");
    scanf("%s", &n);
    printf("Enter the your duration of policy\n");
    scanf("%d", &y);

    people1.gender = g; // this way we can also assign value of g in the strcutre gender.
    people1.status = s;
    strcpy(people1.name, n);
    people1.duration = y;

    printf("Name     :- %s\n", people1.name);
    printf("Gender   :- %s\n", people1.gender == 0 ? "Male" : "Female");
    printf("Status   :- %s\n", people1.status == 0 ? "Minor" : "Major");
    printf("Duration :- %d years\n", people1.duration);

    return 0;
}