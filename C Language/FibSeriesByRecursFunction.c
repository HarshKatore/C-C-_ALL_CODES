#include<stdio.h>
int fib(int a){
    if(a==0){
        return 0;
    }
    if(a==1){
        return 1;
    }
    return fib(a-1)+fib(a-2);
}
int main(){
    int a;
    printf("enter the number of terms you want:\n");
    scanf("%d",&a);
     printf("THE FIBONACCI SERIEWS IS AS FOLLOWS:\n");
    for(int i=0;i<a;i++){
     printf("%d  ",fib(i))  ;
       

    }
return 0;
}