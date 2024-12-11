#include<stdio.h>
void swap(int*p,int*q){
    int *o=q;
    q=p;
    p=o;
    printf(" FIRST NUMBER is %d and second number is %d ",*p,*q);
}
int main(){
    
    int a,b;
    printf("ENTER THE FIRST NUMBER TO BE SWAP:");
    scanf("%d",&a);
    printf("ENTER THE SECOND NUMBER TO BE SWAP:");
    scanf("%d",&b);
    swap(&a,&b);
    return 0;
}