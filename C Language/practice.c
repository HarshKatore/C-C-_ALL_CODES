#include <stdio.h>
int main(){
int n,z;
scanf("%d", &n);
for (int i=0;i<n;i++){
 for(int j=0;j<n-i;j++){
    printf("*");
 
 }

  for(int l=0;l<n-1;l++){
    printf(" ");
  }
  for(int m=0;m<i+1;m++){
    printf("a");
  }
 
  printf("\n");  
}



return 0;    
}