/*defn=pointers that are pointing to a memory location that has been freed or deleted.
they points to the location which are freed or deleted without modifying the value of the pointer, 
so that the pointer still points to the memory location of the deallocated memory
this it gives unpredictable result

*/
#include <stdio.h>
#include <stdlib.h>

int* functionDangling()
{
    int a, b, sum;
    a =34;
    b = 364;
    sum = a + b;
    return &sum;
    
}

int main()
{
    // Case 1: Dallocation of a memory block ie free
    int *ptr= (int *) malloc(7* sizeof(int));
    ptr[0] = 34;              //not *ptr becoz in dynamic m a ptr use vary *ptr replace ptr
    ptr[1] = 36;
    ptr[2] = 64;
    ptr[3] = 5;
    printf("&d", ptr[0]);
    free(ptr); // ptr is now a dangling pointer
    //   printf("&d", ptr[0]);             //give error
    // Case 2: Function returning local variable address
    int * dangPtr = functionDangling(); // dangPtr is now a dangling pointer as the address of local variable is freed when
    // function ends except static
 // Case 3: If a variable goes out of scope
    int * danglingPtr3;
    
    
    {                                      //curley br indicates scope and variable within it is used within it only 
        int a = 12;
    }
//danglingPtr3 = &a;
    
    // Here variable a goes out of scope which means danglingPtr3 is pointing to a location which is freed and hence danglingPtr3 is now a dangling pointer


    return 0;
}
