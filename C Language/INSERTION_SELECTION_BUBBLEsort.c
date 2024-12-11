#include<stdio.h>
    int a;
    void print(int* B){
         for(int i=0;i<a;i++){
         printf("%d\t",B[i]);
    
    }

    }
int* bubbleSort(int *b){
            int temp=0;
            int flag =0;
    for(int i=0;i<a-1;i++){
        for(int j=0;j<a-i-1;j++){
            if(b[j]>b[j+1]){
                flag=1;
            temp=b[j];
            b[j]=b[j+1];
            b[j+1]=temp;
            }
        }
        if (flag==0){
            break;
        }
    }
return b;
}
   
   
int main(){
    printf("HOW MANY NUMBER DO YOU WANT TO SORT:\n");
    scanf("%d",&a);
    int b[a];
    for(int i=0;i<a;i++){
         printf("ENTER %d th NUMBER:\n",i+1);
    scanf("%d",&b[i]);
    }
    int* q=b;
    int *p;
    p=bubbleSort(q);
    printf("PRINTING SORTED DATA:\n");
    
    print(p);
    return 0;
}