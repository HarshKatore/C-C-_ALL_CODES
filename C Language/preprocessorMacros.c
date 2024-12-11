#include <stdio.h>                 //includes system file and we can add user made file also eg #include"math.c"  
#define PI 3.14                    //it equates all characteristics of pi with 3.14 , remember not =sign 
int main() {  
  printf("%f\n",PI);  

                printf( __DATE__);
                printf("\n");
                printf( __TIME__);
                printf("\n");
                 printf( __FILE__);
                 printf("\n");
                 printf("%d", __LINE__);
                 printf("\n");
                 printf("%d\n", __STDC__);                    //compiler using ANSI standard or not. It will return 1 if true.
                return 0;



}