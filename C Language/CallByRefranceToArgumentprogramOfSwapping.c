/*
formal parameters or local variables= variable limited to functions ,they are not exist in actual program
actualparameter =valiables declared in actul program.
global=all over existance
call by value =value of actual argument is copied to formal argument& no permanent changes occur in acutual argument
call by refrance =address of actual argument is copied to formal argument&  permanent changes occur  to acutual argument

refrane program is below=
*/

#include <stdio.h>

void changeValue(int* address)
{
    *address = 37565;
}

int main()
{
    int a = 34, b =56;
    printf("The value of a now is %d\n", a);
    changeValue(&a);                             // change in value is allowed in cbr not in cbv but array is exception
    printf("The value of a now is %d\n", a);
    return 0;
}