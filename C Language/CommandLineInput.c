/*   it is simply input giving in terminal 
*/
#include <stdio.h>

int main(int argc, char  *argv[])                             //argc is count of inputs inclusing file name 
                                                          // argv means array of pointers storing address of file name and input string`
{
    printf("The value of argc is %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("This argument at index number %d has a value of %s \n", i, argv[i]);     //give file name C\:.......
    }                                                                                      //argv[i]act as whole string......
    return 0;
}

// in op write filename.exe string1 string2 in front of line
//PS C:\...................   then it will print all string including file name as first 