
#include <stdio.h>

void arrayRev(int arr[])
{
    int temp[10];
    
    for (int i = 0; i < 7; i++)
    {
        temp[i]=arr[6-i];

    }
    for ( int i = 0; i < 7; i++)
    {
        arr[i]=temp[i];
    }
    
}

void arrayPrint(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("The value of element %d is %d\n", i, arr[i]);
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6,67};
    printf("Before reversing the array\n");
    arrayPrint(arr);
    arrayRev(arr);
    printf("\nAfter reversing the array\n");
    arrayPrint(arr);
    
    
    return 0;
}
