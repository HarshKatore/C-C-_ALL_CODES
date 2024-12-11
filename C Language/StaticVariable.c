#include <stdio.h>

int b = 34; // This is a global variable since it is declared outside of functions it exists in all the functions but if same variable is 
//initialised in function itself with different value then this value is considered
int ret()
{
    return 43*3;
}

int func1(int b1)
{
    //static int myvar = ret();    in static variable direct value is needed not any function for getting the value
    // & if vale is not assigned to it it automati8cally gets value 0
    // in static variable value assigned to variable & changes are preserved even if function is called one more time
    static int myvar =1;  //now it becoms 1 and this value is preserved 
    printf("The value of myvar is %d\n", myvar);
    myvar++;            //this chnge is for next calling
  
    return b1 + myvar;  // return value is given out only if no value is printed through ouy the function
}
int main()
{printf("%d\n",b);
    int b = 344;
   printf("%d\n",b);                  //return value of function is printed only if printf  executed to print it
    int val = func1(b);
    val = func1(b);
   
    
   printf("%d",val);
    return 0;
}
