/* in character scanf the enter key of previous input is somrtimes considered as input to itself an hence skips its execution 
so getchar() is used after taking ip
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int chars, i = 0;
    char a, b;
    char *ptr;
    while (i < 3)
    {
        printf("Employee %d: Enter the number of characters in your Employee Id\n", i+1);
        scanf("%d", &chars);
       /* getchar();                                                // extra
        printf("Enter the value of a\n");
        scanf("%c", &a);
        getchar();
        printf("Enter the value of b\n");
        scanf("%c", &b);  */                                         //   
        ptr = (char *) malloc((chars+1)*sizeof(char));        //null char so+1
        printf("Enter your Employee Id\n");
        scanf("%s", &ptr);                              
        printf("Your Employee Id is %s\n",*ptr );
        free(ptr);
        i = i + 1;
    }

    return 0;
}
