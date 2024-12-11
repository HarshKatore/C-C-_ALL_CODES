#include<stdio.h>
int main()
{   int i,j,k;
    int a[10][10],b[10][10] ,c[3][3];


    printf("enter the first matrix=\n");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        { 
            scanf("%d",&a[i][j]);
        }   
        printf("\n");
    }


    printf("enter the second matrix=\n");
    for (i=0;i<3;i++)                                                 //3=row of first
    {   for(j=0;j<3;j++)                                               // 3=col of first
        {
            scanf("%d",&b[i][j]);
        }   
        printf("\n");
    }

   

    printf("sum of matrices is=\n");
    for (i=0;i<3;i++)
    
    {   for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }   
        printf("\n");
    }

    
    printf("\nMultiplication of matrices is=\n");
    for (i=0;i<3;i++)                                          // 3=no of row of first               ie dimension of result matrix 
    {   for(j=0;j<3;j++)                                         // 3=no of column of second
        {
            c[i][j]=0;   
            for(k=0;k<3;k++)                                   // 3=column of first=row of second            ie same in both
            {
              
                c[i][j] += a[i][k] * b[k][j];                          
            } 
        }
    }
       
    //for printing result    
    for(i=0;i<3;i++)    
    {    
        for(j=0;j<3;j++)    
        {    
            printf("%d\t",c[i][j]);    
        }    
        printf("\n");    
    }    
    return 0;
}