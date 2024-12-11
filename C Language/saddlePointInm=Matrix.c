#include<stdio.h>
int main()
{  
    int a,b;
    printf("enter the no of row in matrix");
    scanf("%d",&a);
    printf("enter the no of col in matrix");
    scanf("%d",&b);

    int arr[a][b];


    printf("enter the first matrix=\n");
    for (int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        { 
            scanf("%d",&arr[i][j]);
        }   
       
    }


    int min ,max,i1=0,j1=0;
    for (int i=0;i<a;i++)                                                 //3=row of first
    {      min=arr[i][0];
           for(int j=0;j<b;j++)                                               // 3=col of first
        {   
            if(min>arr[i][j])
            {
                min=arr[i][j];
                j1=j;
            }
           
        }  
           max=arr[0][j1];
           for(int k=0;k<b;k++)                                               // 3=col of first
    {
            if(max<arr[k][j1])
            {
                max=arr[k][j1];
                i1=k;
            }
    }
        if(min==max)
        {
            printf("yes %d %d\n",i1,j1);
        
        }   

        
    }
    return 0;
}