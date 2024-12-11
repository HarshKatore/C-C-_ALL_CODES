

/* we can use void ir int main return 0 when we want to print 
return in function do not print until printf not used in main function but printf in function prints 
in array
int arr[5]={21,33,56,87};

input 3=fgets,scanf,compile time 2  &op 2=printf ,puts
in string,
char str[] = {'h', 'a', 'r', 'r', 'y', '\0'};
 char str[6] = "harry";
 null conveys compiler that string ends sothat garbeg value is
 not thrown in remaining initialised space
 initaialised space must contain space for null character
*/
#include <stdio.h>

void printStr(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}


int main()
{
  
    char str[34];
    gets(str);  //take ip using gets
    //fgets(str,sizeof(str),stdin)
    printf("Using custom function printStr\n"); //op using function 
    printStr(str);

    printf("Using printf %s\n", str); //op using printf

    printf("using puts: \n"); //op using puts
    puts(str);
    return 0;
}
