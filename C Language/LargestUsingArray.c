        #include<stdio.h>
        int main()
{       int n,i,large;
        int a[15];
        printf("enter the total number of inputa to be taken=");
        scanf("%d",&n);

        for (i=0;i<n;i++)
{
        printf("enter the number%d =",i+1);
        scanf("%d",&a[i]);

}
        for(i=0;i<n;i++)
{       printf("entered number=%d ",a[i]);
}
         large=a[0];

        for(i=0;i<n;i++)
{       if (large<a[i])
        large=a[i];
}      


        printf("\n largest=%d",large);

        

        return 0;
}
