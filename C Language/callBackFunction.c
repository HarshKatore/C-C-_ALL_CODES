/* CB function is used to use small function in bigger function . a pointer points to the function and
 that pointer is given as input to big function and that pointer with values are called in big function.
*/
#include<stdio.h>
int sum (int a, int b)
{
    return a + b;
}

void greetHelloAndExecute( int a ,int b, int (*fptr)(int , int )){
    printf("Hello user\n");
    printf("The sum of 5 and 7 is %d\n", fptr(a, b));    //ip values are given seperately side by side
    
}

void greetGmAndExecute(int (*fptr)(int, int)){
    printf("Good Morning User\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
}

int main()
{   int a=9, b=7;
    int (*ptr)(int, int);
    ptr = sum;
    greetHelloAndExecute(a,b, ptr);    // another function has been given a function 
    return 0;
}
