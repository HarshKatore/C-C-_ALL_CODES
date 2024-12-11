#include<stdio.h>
int main(){
    int *a,*b;
    int c=2;
    int d=5;
    a=&c;
    b=a+5;
    printf("%d",b-a);
    return 0;
}