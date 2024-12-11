#include<stdio.h>
 int length(char* a){
    int count=0;
    for(int i=0;a[i]!='\0';i++){
count ++;
    }
    return count;
 }
int main(){
    char*p,*q;
    char a[20];
    char b[20];
    p=a;
    scanf("%s",p);
    printf("%s\n",p);
    //
   
    q=b;
    scanf("%s",q);
    printf("%s\n",q);
    printf("%d\n",length(a));
    
    char c[20];
    for(int i=0;i<length(a);i++){
       c[i]= p[i];
    }
    for(int i=0;i<length(a);i++){
        p[i]=c[length(a)-i-1];
    }
    printf("%s\n",p);
    //
    if(length(a)==length(b)){
        printf("EQUAL");
    }
    else{
        printf("UNEQUAL");
    }


    return 0;
}