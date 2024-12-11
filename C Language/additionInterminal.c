#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{   //basically taking ip in terminal and other  operation in main fn
    // You have to create a command line utility to add/subtract/divide/multiply two numbers
    // First command line argument of your c program must be the operation.
    // The next arguments being the two numbers. For example:
    // >>Command.c add 45 4
    // >>49
    char * operation;
    int num1, num2;
    operation = argv[1];             //here two pointers are equated
    num1 = atoi(argv[2]);              //atoi convers string in int   we can clear * and put atoi outside bracket
    num2 = atoi(argv[3]);

    

    if(strcmp(operation, "add")==0){                          //* ie derefrencing is done only to int pointer
        printf("%d\n", num1 + num2);
    }
    else if(strcmp(operation, "subtract")==0){
        printf("%d\n", num1 - num2);
    }
    else if(strcmp(operation, "multiply")==0){
        printf("%d\n", num1 * num2);
    }
    else if(strcmp(operation, "divide")==0){
        printf("%d\n", num1 / num2);
    }


    return 0;
}
//PS C:\Users\LENOVO\Desktop\HARSH COADING\C Language> .\additionInterminal.exe add 56 76     =format



