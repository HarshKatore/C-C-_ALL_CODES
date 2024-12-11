/* changes in variable during function will be permanent for array
ptr is address
*ptr is its value
*/
#include <stdio.h>

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
     array[0] = 382; // Very important point that if you change any value here, it gets reflected in main()
    return 0;
}


void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
       // printf("The value at %d is %d\n", i, ptr[i]);                   in array  it is also right
         printf("The value at %d is %d\n", i, *(ptr+i));
    }
    *(ptr + 2) = 6534;
}


void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d, %d is %d\n", i, j, arr[i][j]);
        }
    }
}


int main()
{ 
    int arr[]={5,3,8,9};
      printf("The value at index 0 is %d\n", arr[0]);
     func1(arr);
     printf("The value at index 0 is %d\n", arr[0]); //permanent changes
     func2(arr);
    printf("The value at index 2 is %d\n", arr[2]); 


    int arr1[][2] = {{2, 13}, {9, 3}};
    
    func3(arr1);
    return 0;
}
