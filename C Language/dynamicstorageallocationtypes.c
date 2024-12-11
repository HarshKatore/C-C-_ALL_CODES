
/* the memory is divided in 4 levels:1)code=all the text coad in program
2)global and local variable=a)data segment=initialised variable along with value b)bss segment=initilised with out value
3)stack=it is like a test tuBe LIFO last in first out consider program calls function A then A will take
 space from stack and execute inself and during execution it calls function b this will also get execute and call function c 
  and nesting take place so in stack last entered c will complete execution and pop out simlly b will complete and pop out and a 
  also and stack becomes empty 
4)heap= the allotment of memory in a program by user at the time of execution itself
a)malloc
b)calloc
c)realloc
d)free

in melloc like dynamic memory function the pointers useing pointer procedure vary eg *ptr is not use for value ,ptr is used simply
*/
#include <stdio.h>
#include <stdlib.h> //all heap functions are under stdlib

int main()
{
    // //Use of malloc
    // int *ptr;
    // int n;
    // printf("Enter the size of the array you want to create\n");
    // scanf("%d", &n);

    // ptr = (int *)malloc(n * sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value no %d of this array\n",i);
    //    scanf("%d", &ptr[i]);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("The value at %d of this array is %d\n",i, ptr[i]);
    // }

    //Use of calloc
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)calloc(n ,  sizeof(int));       //here *ptr acts as an array and n is no of values in it
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n",i);
       scanf("%d", &ptr[i]);    //scanf needs address so &ptr not*ptr
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n",i, ptr[i]);    //*not used
    }

    //Use of realloc
    printf("Enter the size of the new array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr ,  n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value no %d of this array\n",i);
       scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The new value at %d of this array is %d\n",i, ptr[i]);
    }

    free(ptr);
    
    
    return 0;
}
