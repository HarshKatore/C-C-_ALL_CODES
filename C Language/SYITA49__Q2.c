//SYITA49 [Q2]
#include<stdio.h>


int main()
{
    // Assume 4x4 sparse matrix
    int sparseMatrix[4][4] =
    {
        {0 , 0 , 0 , 0  },
        {0 , 0 , 4 , 0  },
        {3 , 0 , 0 , 2  },
        {0 , 0 , 0 , 5  }
    };
 
    int size = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (sparseMatrix[i][j] != 0)
                size++;
 
    // number of columns in compactMatrix (size) must be
    // equal to number of non - zero elements in
    // sparseMatrix
    int compactMatrix [size] [3];
 
    // Making of new matrix
    int k = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (sparseMatrix[i][j] != 0)
            {
                compactMatrix[k][0] = i;
                compactMatrix[k][1] = j;
                compactMatrix[k][2] = sparseMatrix[i][j];
                k++;
            }
 
    for (int i=0; i<size; i++)
    {
        for (int j=0; j<3; j++)
            printf("%d ", compactMatrix[i][j]);
 
        printf("\n");
    }

    // user defined locations entry
    int b,d;
    printf("enter the boarding and destination station(0 for A / 1 for B / 2 for C /3 for D):\n");
    scanf("%d %d",&b , &d);
    printf("the frequency of trains is %d",sparseMatrix[b][d]);
    return 0;
}