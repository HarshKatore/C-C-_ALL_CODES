/*recursion takes more time than itration because in recursion function for single value is done for multiple time
 eg infibo for 33 fibo of 31 is calculated multiple time
*/

#include <stdio.h>

int fib_recursive(int n)
{
    if(n==1 || n==2){
        return n-1;
    }
    else{
        return fib_recursive(n-1) + fib_recursive(n-2);
    }    
}


int fib_iterative(int n)
{
    int a = 0;
    int b = 1;
     if (n==0){
         return 0;
     }
     if (n==1){
         return 1;
     }
    for (int i = 2; i <n; i++)  //even if we know 3rd =a+b we have to do that itration 
    {
        b = a+b; //1 for iteration 1 ie b=a+b
        a = b-a; //1 for iteration 1 ie a=b

    }
    
    return b;
}

int main()
{
    int number;
    printf("Enter the index to get fibonacci series\n");
    scanf("%d", &number);
    printf("The value of fibonacci number at position no %d using iterative approach is %d\n",number, fib_iterative(number));
    printf("The value of fibonacci number at position no %d using recursive approach is %d\n", number, fib_recursive(number));
    return 0;
}