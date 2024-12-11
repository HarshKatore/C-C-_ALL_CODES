#include<stdio.h>
int main()
{
int num1, num2 ;
char op;
printf("choose the operation(+,-,*,/)=");
scanf("%c",&op);
printf("enter two numbers:");
scanf("%d%d",&num1,&num2);
switch (op)
{case'+':
printf("addition is=%d",num1+num2);
break;
case'-':
printf("substraction is=%d",num1-num2);
break;
case'*':


printf("multiplication is=%d",num1*num2);
break;
case'/':
printf("division is=%d",num1/num2);
break;
default:
printf("error occured" );
} return 0;
}