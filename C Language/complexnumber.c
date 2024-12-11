// C program with functions to 1)read complex number 2)add  3)multiply
#include<stdio.h>
typedef struct complex{
    int c1;
    int c2;
    int c3;
    int c4;
} p;
p readcomplex(){
p a;
printf("ENTER THE REAL PART OF FIRST COMPLEX NUMBER:\n ");
scanf("%d",&a.c1);
printf("ENTER THE COMPLEX PART OF FIRST COMPLEX NUMBER:\n ");
scanf("%d",&a.c2);
printf("ENTER THE REAL PART OF SECOND COMPLEX NUMBER: \n");
scanf("%d",&a.c3);
printf("ENTER THE COMPLEX PART OF SECOND COMPLEX NUMBER: \n");
scanf("%d",&a.c4);
return a;
}
void complexadd(p a){
    //addition
    printf("\nTHE ADDITION OF COMPLEX NUMBER COMES TO BE: %d+%di\n",a.c1+a.c3,a.c2+a.c4);
   }
    void complexmul(p a){//MULTIPLICATION
    printf("\nTHE MULTIPLICATION OF COMPLEX NUMBER COMES TO BE: %d+%di\n",((a.c1*a.c3)-(a.c2*a.c4)),((a.c1*a.c4)+(a.c2*a.c3)));
}
int main(){
int o;
 p a=   readcomplex();
 do{
 printf("MENU:\na)ENTER 1 FOR ADDITION\nb) ENTER 2 FOR MULTIPLICATION\nc)enter 0 for exit: ");
 scanf("%d",&o);
 switch (o) 
 {
    case 1:
complexadd(a);
break;
 
 case 2:
complexmul(a);
break;
}
 }
 while(o!=0);
    return 0;
}