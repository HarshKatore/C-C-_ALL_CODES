
/* in mode,r=read 
w=clear previous and write new
a=previous+add new as much times you add
w+=clear then write read
r+= read write
a+=previous andread write
note that after every operation the changes will be taking place so check file
in get op is in terminal
in put op is in file
get is r
put is w or a
*/
#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "a+");    //change mode accordingly 
   //fgetc
   /* char c = fgetc(ptr);                              //string pointer dont need * while printing
     printf("The character I read was %c\n", c );
     c = fgetc(ptr);
     printf("The character I read was %c\n", c );
    */
    //fgets
   /* char str[6];
    fgets(str, 5, ptr);
    printf("The string is %s\n", str);
    */
    //fputc
     fputc('o',ptr);

    //fputs
     fputs("this is harsh",ptr);



    fclose(ptr);
    return 0;
}
