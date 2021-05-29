// #include <stdio.h>
// #include <string.h>
// int main()
// {

//   char *p[3] = {"nagpur", "Durgesh", "vishal"};

//   printf("%u %u \n", &p, p);
//   printf("%s %u %s %u\n", *p, p[0], p[0],&p[0]);
//   printf("%s\n", p[1]);
//   printf("%u\n", p[1]);
//   printf("%s\n", p[2]);7

//   // int i=0;
//   // while (str[i] != '\0')
//   // {
//   // printf("%c at addres is %d\n",str[i],&str[i]);
//   // i++;
//   // }

//   return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {

//   char str[10];
//   // char p[] = "Nagpur";
//   // char *p = "nagpur";
//   char name[2] = "Nagpur";
//   char *p = name;

//   // printf("enter your name\n");
//   // // scanf("%s", str); // it will termnate the string as soon  it het next caharcter as space
//   // scanf("%[^\n]s", str); // alternative methid to enter mutli woird string by scanf
//   // // gets(str); // multi word
//   // // puts(str); // multi word
//   // printf("%d%s", 'a', str);
//   for (int i = 0; i < 6; i++)
//   {
//     printf("%c", *p); // when we using charcter format specofer the we have tp use derence * to get the vlue athe the address
//     p++;
//   }
//   printf("\n");

//   // int i=0;
//   // while (str[i] != '\0')
//   // {
//   // printf("%c at addres is %d\n",str[i],&str[i]);
//   // i++;
//   // }

//   return 0;
// }

// #include <stdio.h>

// void printStr(char str[])
// {
//     int i=0;
//     while(str[i]!='\0')
//     {
//         printf("%c", str[i]);
//         i++;
//     }
//     printf("\n");
// }
// int main()
// {
//     // char str[] = {'h', 'a', 'r', 'r', 'y', '\0'};
//     // char str[6] = "harry";
//     char str[34];
//     gets(str);
//     printf("Using custom function printStr\n");
//     printStr(str);
//     printf("Using printf %s\n", str);
//     printf("using puts: \n");
//     puts(str);
//     return 0;
// }

//************************************ STRING FUNCTIONS LIBRARAY******************************************//

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//   // char *s1[] = {"harry",
//   //                "durgesh"};
//   // char s2[] = "ravi";
//   // printf("The string 1 is %s", s1[0]);

//   // char s3[54];
//   // puts(strcat(s1, s2));
//   // printf("The length of s1 is %d\n", strlen(s1));
//   // printf("The strcmp for s1, s2 returned %d ", strcmp(s1, s2));
//   // printf("The length of s2 is %d\n", strlen(s2));
//   // printf("The reversed string s1 is: ");
//   // puts(strrev(s1));
//   // printf("The reversed string s2 is: ");
//   // puts(strrev(s2));

//   // strcpy(s3 ,strcat(s1, s2));
//   // puts(s3);

//   // allow user to enter two strings and then concatenate them by saying that
//   // str1 is a friend of str2

//   //   printf("%d\n",dict[0]);
//   //   printf("%d\n",dict[1]);
//   //   printf("%d\n",dict[2]);
//   //   if (dict[0]==dict[1])
//   //   {
//   //   printf("yes they are same\n");
//   //      printf("%d\n",dict[1]);
//   //      printf("%d\n",n);

//   // return 0;
// }

//----------------------------- method to storestring in a aarray of pointer by keyboard using scanf.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char *name[6];
  char n[20];
  int len;
  char *p;
  int i;
  for (i = 0; i < 6; i++)
  {
    printf("enter the name\n");
    scanf("%s", &n);
    len = strlen(n);
    p = (char *)malloc(len + 1);
    strcpy(p, n);
    name[i] = p;
  }
  printf("\n%s\n", p); // concept clearing method.
  printf("\n%s\n", n);

  for (i = 0; i < 6; i++)
  {
    printf("\n%s\t", name[i]);
  }

  return 0;
}