#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    //*************************************************************** W+ mode*************************************************************

    // ptr = fopen("myfile.txt", "w+"); //This is write + mode simply delte the all contents whicj were in the file than it write which u give to write,
    // fputs("hello guys!", ptr);

    //*************************************************************** a+ mode*************************************************************
    
    // ptr = fopen("myfile.txt", "a+"); // This is append + mode simply it will add more content to file. like append mode.
    // fputs("hello guys!", ptr);

    //*************************************************************** R+ mode*************************************************************

    // ptr = fopen("myfile.txt", "r+"); // this is read+ mode in this it will read the file and write the content in the begining form start.
    // fputs("hello guy!", ptr);

    //*************************************************************** FPUTC AND FPUTS*************************************************************

    // ptr = fopen("myfile.txt", "w");
    // fputc('D', ptr);
    // fputs("hello guy", ptr);

    //*************************************************************** FGETS**********************************************************************
    // ptr = fopen("myfile.txt", "r");
    // char *string; // here i make char pointer
    // string = fgets(string, 10, ptr); // to get string it is little bit different from getting fgetc here first we have to put the variable name that is string then length howm many chracter  want to read +1 for nul cgarcter and the file name that is ptr.
    // printf("%s", string);

    //*************************************************************** FGETC**********************************************************************

    // ptr = fopen("myfile.txt", "r");
    // char c = fgetc(ptr); // here as we want to print the first character of the file.txt so we use fgetc as get means to read the file.
    // printf("%c",c);
    // printf("%c", fgetc(ptr));// alternative method *** the many time u call the function it will print the next charcter from the file

    fclose(ptr); // Its our duty to close the file as we firswt open the file so we should aslo close the file.
    return 0;
}