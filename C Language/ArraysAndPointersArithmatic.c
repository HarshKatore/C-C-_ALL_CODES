/*
arrithmatic of pointers is different ,it does operations by add/sub of size of data type 
eg if ptr=1534365
ptr++=1534369   
also int* arrayptr = arr; means it stores address of first element of array 
(arr+1)=&arr[1];
array name acts as pointer without[]
&a[5]=(ptr+5) and a[5]=*(ptr+5)
%u%x%p
*/



#include <stdio.h>
int main()
{
    // char a = '3';                      //%d also print add
    // char* ptra = &a;
    // printf("%d\n", ptra);
    // ptra--;
    // printf("%d\n", ptra);
    // printf("%d", ptra-2);
    int arr[] = {311,52,3,4,5,6,67};
    int* arrayptr = arr;
    printf("Value at position 3 of the array is %d\n", arr[3]);
    printf("The address of first element of the array is %u \n", &arr[0]);
    printf("The address of first element of the array is %u \n", arrayptr);
    printf("The address of first element of the array is %u \n", ++arrayptr);    
    printf("The address of first element of the array is %u \n", arr);                  //its array name not pointer arr=&arr[0]
    printf("The address of second element of the array is %u \n", &arr[1]);
    printf("The address of second element of the array is %u \n", arr + 1);
    printf("The address of third element of the array is %u \n", &arr[2]);
    printf("The address of third element of the array is %u \n", arr + 2);
    // arr--; // this line will throw an error
    arrayptr++;
    printf("The value at address of first element of the array is %d \n", *(&arr[0]));
    printf(" %d \n", arrayptr++);
    printf("The value at address of first element of the array is %d \n", arr[0]);
    printf("The value at address of first element of the array is %d \n", *(arr));
    printf("The value at address of second element of the array is %d \n", *(&arr[1]));
    printf("The value at address of second element of the array is %u \n", arr[1]);
    printf("The value at address of second element of the array is %d \n", *(arr + 1));

    return 0;
}
