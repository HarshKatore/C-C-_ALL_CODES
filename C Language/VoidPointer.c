/*Important points:
C does not allow void pointers to be dereferenced. 
We cannot use pointer arithmetic with void pointers.

VOID POINTERSARE GENERAL PURPOSE POINTERS WHICH ARE USED TO STORE THE ADDRESS OF ANY TYPE OF VARIABLE TIME BEING,
BUT AT THE TIME OF DEREFRENCING THE DATA TYPE IS TYPE CASTED
DEREFRENCING MEANS PRINTING *PTR

*/
#include <stdio.h>
int main()
{
    int a = 345;
    float b = 8.3;
    void *ptr;
    ptr = &b;
    printf("The value of b is %f\n", *((float *)ptr));           //TYPECASTED
    ptr = &a;
    printf("The value of a is %d\n", *((int *)ptr));               //TYPECASTED
    return 0;
}
