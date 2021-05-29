#include <stdio.h>
#include <string.h>

struct driver_detail
{
    char name[12];
    char driving_license[10];
    char route[20];
    int kms;
};

int main()
{
    struct driver_detail d1, d2, d3; // here there are 3 variable declare so we can first enter all the details and then we can print the output.

    printf("Driver 1 enter your details \n");
    printf("Enter your name :-");
    scanf("%s", &d1.name);
    printf("Enter your driving license no :-");
    scanf("%s", &d1.driving_license);
    printf("Enter your route :-");
    scanf("%s", &d1.route);
    printf("Enter the total KMS :-");
    scanf("%d", &d1.kms);

    printf("Driver 2 enter your details \n");
    printf("Enter your name :-");
    scanf("%s", &d2.name);
    printf("Enter your driving license no :-");
    scanf("%s", &d2.driving_license);
    printf("Enter your route :-");
    scanf("%s", &d2.route);
    printf("Enter the total KMS :-");
    scanf("%d", &d2.kms);

    printf("Driver 3 enter your details \n");
    printf("Enter your name :-");
    scanf("%s", &d3.name);
    printf("Enter your driving license no :-");
    scanf("%s", &d3.driving_license);
    printf("Enter your route :-");
    scanf("%s", &d3.route);
    printf("Enter the total KMS :-");
    scanf("%d", &d3.kms);

    printf("Name :- %s\n", d1.name);
    printf("Driving license :- %s\n", d1.driving_license);
    printf("Route :- %s\n", d1.route);
    printf("Total kms :- %d\n", d1.kms);
    printf("Name :- %s\n", d2.name);
    printf("Driving license :- %s\n", d2.driving_license);
    printf("Route :- %s\n", d2.route);
    printf("Total kms :- %d\n", d2.kms);
    printf("Name :- %s\n", d3.name);
    printf("Driving license :- %s\n", d3.driving_license);
    printf("Route :- %s\n", d3.route);
    printf("Total kms :- %d\n", d3.kms);



    return 0;
}

// int main()
// {
//struct driver_detail d; // here the variable is only one so at a time only one drive information can be store.
//     int no;
//     printf("Enter the total number of driver are there\n");
//     scanf("%d", &no);
//     for (int i = 1; i <= no; i++)
//     {

//         printf("Driver %d enter your details \n", i);
//         printf("Enter your name :-");
//         scanf("%s", &d.name);
//         printf("Enter your driving license no :-");
//         scanf("%s", &d.driving_license);
//         printf("Enter your route :-");
//         scanf("%s", &d.route);
//         printf("Enter the total KMS :-");
//         scanf("%d", &d.kms);

//         printf("Name :- %s\n", d.name);
//         printf("Driving license :- %s\n", d.driving_license);
//         printf("Route :- %s\n", d.route);
//         printf("Total kms :- %d\n", d.kms);
//     }

//     return 0;
// }
// char n[12];
// char dl[10];
// char ro[20];
// int km;
// strcpy(d.name, n);
// strcpy(d.driving_license, dl);
// strcpy(d.route, ro);
//  scanf("%s", &n); this method can also be used but memeory is more wasted