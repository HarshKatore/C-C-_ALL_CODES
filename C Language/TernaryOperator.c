#include<stdio.h>
int main ()
{
    int a,h=3,p=7,g=57,b;
    printf("enter the number");
    scanf("%d",&b);

    a=(b==5)?h:(b==10)?p:g;
     printf("%d\n",a);
    return 0;
}
