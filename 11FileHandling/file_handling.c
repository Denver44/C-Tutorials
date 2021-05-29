#include <stdio.h>
int main()
{
    //*************************** READING OF FILE ******************************************************************************************************************
     FILE *ptr = NULL; // as we dont want our file ptr store any garbage value so thats why we make it null so that it doesnt store any garbage value.
    char string[50];// here we are making array of string in which the sting or the carcaters will be stored form the myfile.txt.
    ptr = fopen("myfile.txt", "r"); // fopen used to oprn the file first purt the name of file in double upper comma and then the mode here mode is read.
    fscanf(ptr, "%s", string); // fscaf is used to for readung the file as here we read the contenst of the myfile.txt and printing the contenst in the next line.
    printf("The contents are %s\n", string); // here we are printing the contents of the myfile.txt as it is only string so after white spaces the string will got end

    // //*************************** WRITING OF FILE ******************************************************************************************************************
    // FILE *ptr = NULL;
    // char string[50] = "Durgesh's first step in Programming World !";
    // ptr = fopen("myfile.txt", "w");          // fopen used to oprn the file first purt the name of file in double upper comma and then the mode here mode is Write.
    // fprintf(ptr, "%s", string);              // fscaf is used to for reading the file as here we read the contenst of the myfile.txt and then we first delete the contents of the myfile text and then we overwite the string which we declare upper.
    // printf("Check the file contenst are changed"); // no need of this line just put as reminder to check your file

    // //*************************** APPEND OF FILE ******************************************************************************************************************
    // FILE *ptr = NULL;
    // char string[50] = "Durgesh's first step in Programming World !";
    // ptr = fopen("myfile.txt", "a");          // fopen used to oprn the file first purt the name of file in double upper comma and then the mode here mode is Append.
    // fprintf(ptr, "%s", string);              // fscaf is used to for reading the file as here we read the contenst of the myfile.txt and then we append the string over there wihtout deleting the contents .
    // printf("Check the file contenst are changed"); //no need of this line just put as reminder to check your file
    return 0;
}