    #include<stdio.h>
    int main()
{
    int num,sum=0,r;
    printf("enter the number=");
    scanf("%d",&num);
    while(num>0)
    {
       r=num%10;
       sum=r+sum;
       num=num/10;
    }
    printf("sum of number is %d",sum);
    return 0;
}