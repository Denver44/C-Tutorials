// #include <stdio.h>
// #include <string.h>
// struct student_record
// {
//     char name[20];
//     int age;
// };
// int main()
// {
//     FILE *ptr;
//     ptr = fopen("C86.txt", "w"); // creating a file in a binary mode so taht we can write it in binary form

//     struct student_record class[5];
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter the student name %d\n", i + 1);
//         scanf("%s", class[i].name);
//         printf("Enter the student age %d\n", i + 1);
//         fflush(stdin);
//         scanf("%d", &class[i].age);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         fprintf(ptr, " %s %d", class[i].name, class[i].age);
//     }

//     fclose(ptr);

//     return 0;
// }

//****************//
// #include <stdio.h>
// #include <stdlib.h>
// typedef struct
// {
//     char name[20];
//     int age;
// } student;
// int main()
// {
//     FILE *ptr;
//     ptr = fopen("C86.txt", "r");

//     student s[5];
//     if (ptr == NULL)
//     {
//         printf("Cannot open the file\n");
//         exit(1);
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         fscanf(ptr, "%s %d", s[i].name, &s[i].age);
//         printf("%d student name %s and age is %d\n", i+1, s[i].name, s[i].age);
//     }
//     fclose(ptr);
//     return 0;
// }
//********************//
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// typedef struct
// {
//     char name[20];
//     int age;
// } student;
// int main()
// {
//     FILE *ptr;
//     ptr = fopen("C84.dat", "rb");

//     student s[5], temp;
//     if (ptr == NULL)
//     {
//         printf("Cannot open the file\n");
//         exit(1);
//     }

//     fread(s, sizeof(student), 5, ptr);
//     printf("Befor sorting\n");
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d student name %s and age is %d\n", i + 1, s[i].name, s[i].age);
//     }

//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = i + 1; j < 5; j++)
//         {
//             if (strcmp(s[i].name, s[j].name) > 0)
//             {
//                 temp = s[i];
//                 s[i] = s[j];
//                 s[j] = temp;
//             }
//         }
//     }
//     printf("AFTER sorting\n");
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d student name %s and age is %d\n", i + 1, s[i].name, s[i].age);
//     }

//     fclose(ptr);
//     return 0;
// }