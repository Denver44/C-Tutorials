#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *ptr; //[1] here we have created a file ptr which is pointing a file.

    ptr = fopen("1file.txt", "w"); //[2] w menas the writing mode and file.txt means the file which u want to open if this file is not in the system then it wiill automatically get created.

    // char a[100] = "HEllo Students"; //[3] manually.

    // char s[100]; //[4] created a charcter array.

    // printf("Enter the string which u want to write in the file ");
    // gets(s); //[5] gets() does not stop reading input when it encounters whitespace instead it takes whitespace as a string.

    if (ptr == NULL) //[6] eveytime check this condition
    {
        printf("File cannot open");
        exit(1); //[7] exit is a comand means we are exiting the loop and aslo it means due to some reason the we are exiting
    }
    // for (int i = 0; i < strlen(s); i++)
    // {
    //     fputc(s[i], ptr); // [8] using loop to put chacter by charcter.
    // }
    //************* [9] MANUALLY PUTTING THE CHARCTER IN FILE WIHOUT SCANF***********************//

    //************************ fputc('charcter', 'file_ptr_name');**********************************//

    fputc('d', ptr);
    fputc('u', ptr);
    fputc('r', ptr);
    fputc('g', ptr);
    fputc('e', ptr);
    fputc('s', ptr);
    fputc('h', ptr);
    printf("CHeck the file\n");
    //**************************************************************************************//

    fclose(ptr); // this is how we close the file and it is mandaotory to give the file name to which we are closing
    return 0;
}
