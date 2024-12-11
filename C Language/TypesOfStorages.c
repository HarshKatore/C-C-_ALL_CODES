
/*4 Types are:
1)AUTO(LOCAL)
2)EXTERNAL(GLOBAL)=KEYWORD EXTERN IS USED IN FUNCTION TO PRIORITISE THE GLOBAL VARIABLE WHEN SAME VARIABLE IS
 LOCALLY ASLO DECLARED
3)STATIC =PREVENTS THE VALUE IF VARIABLE IN FUNCTION
4)REGISTERED=THIS ARE THOSE WHICH ARE USED FREQUENTLY SO STORED IN CPU 
// Declaration - Telling the compiler about the variable (No space reserved)
    // Definition - Declaration + space reservation or value giving
*/
#include <stdio.h>
 int b;    // 2
int myfunc(int a, int b)
{

    static int myVar;      //static automatically initialised by 0   //3
    myVar ++;
    printf("The myVar is %d\n", myVar);

    myVar = a+b;
    return myVar;
}

int main()
{
   auto int a;  //1
    register int myVar = myfunc(3, 5);             //4
    myVar = myfunc(3, 5);
    myVar = myfunc(3, 5);
    myVar = myfunc(3, 5);
    // printf("The myVar is %d\n", myVar);

    return 0;
}
