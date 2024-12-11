/*pointers is data type which stores address of variable,
null poiner means p which store null ie 00000
&a means address of a

*/

#include <stdio.h>

int main()
{
   
    int a=76;
    int *ptra = &a;
    int *ptr2 = NULL;
   int *ptr=77;
    printf("The address of pointer to a is %p\n", &ptra);
    printf("The address of a is %p\n", &a);
    printf("The address of a is %p\n", ptra);
    printf("The address of some garbage is %p\n", ptr2);
    printf("The value of a is %d\n", *ptra);
    printf("The value of a is %d\n", a);
    return 0;
}