#include <stdio.h>                 //fopen and fclose both ared in stdio.h

int main()
{
    FILE *ptr = NULL;                                                    // making file pointer                
        char string[64] = "This content was produced by harsh";
 char str[64];
    // ****** Reading a file ******
     ptr = fopen("myfile.txt", "r");                                             //opening file by its name,purppose
                                                                                 // here computer is reading ip by fscanf so r
     fscanf(ptr, "%s", str);                                                     //scaning file in string from file IE STRING GETS INPUT
     printf("The content of this file has %s\n",str );

    // ****** Writing a file ******
    ptr = fopen("2file.txt", "w");                                          //file open for writing w= file is made new with 
    //                                                                       printing   content of that string ,a= old+new content from string 
    fprintf(ptr, "%s", string);                                         //computer writing content from string to file  IE FILE GETS INPUT  ..SEE FILE ITS CHANGED

    return 0;
}



//in fgets string then ptr in fprintf and fscanf ptr then string