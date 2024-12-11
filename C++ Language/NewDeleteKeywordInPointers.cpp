#include<iostream>
using namespace std;

int main(){
    // Basic Example
    int a = 4;
    int* ptr = &a;
    cout<<"The value of a is "<<*(ptr)<<endl;
  
float *p = new float(40.78);                    //syntax  ( is used and valu is feed instde ,,no need to give name to any variable to store value directly point it  to value)
//float *p = new int(40);                    //syntax
    cout << "The value at address p is " << *(p) << endl;
    int *arr = new int[3];                          //[] is used and size is feed inside
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

     int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    delete[] arr;             //syntax              //now array is cleard so give garbage value
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    return 0;
}
/*
generally
(ptr+i)=&a[]
*(ptr+i)=a[]

but in string ,array pointer, instead of
*(ptr+i)
ptr[i] also print successfully

*/