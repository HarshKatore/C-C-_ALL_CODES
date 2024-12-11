
 #include<stdio.h>

int main()
{
     int num1=0, num2=1, num3, i, n;
        printf("enter the range= ");
     scanf("%d",&n);
         printf("fibonaki series is %d, %d, ",num1, num2);
     for (i=3;i<=n;i++)
    {   num3=num1+num2;
        printf("%d, ",num3);
        num1=num2;
        num2=num3;
    }
    return 0;
}