/*NULL pointer vs. Uninitialized pointer: null pointers stores no memory location but UP stores 
the memory in which the garbage value gets feeded by compiler

NULL pointer vs. Void pointer:
 NULL pointer is a value giving, and the void pointer is a type
 int *ptr = NULL;
 vs
void *ptr;
 by assigning we can avoid the error as uninitialised variable carries garbage value if
  we derefrence it it will give some error or useless value
  dynamic memory in heap such as malloc points to void pointer and then it is point casted in its syntax ....see syntax
  
 */
#include <stdio.h>

int main()
{
    int a = 34;
    // int * ptr=NULL ;         //   give 0                    try all three one by one
    //int * ptr ;            error
    int *ptr =&a;
    if (ptr != NULL){
    printf("The address of a is %d\n", ptr);
    }
    else{
        printf("The pointer is a null pointer and cannot be dereferenced");
    }
    return 0;
}
