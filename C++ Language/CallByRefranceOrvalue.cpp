
#include<iostream>
using namespace std;
/*
int sum(int a, int b){
    int c = a + b;
    return c;
}

// This will not swap a and b   bcoz c b value do not changes value of function in actual function
void swap(int a, int b){ 
    int temp = a;           
    a = b;               
    b = temp;             
}

// Call by reference using pointers
void swapPointer(int* a, int* b){
    int temp = *a;           
    *a = *b;               
    *b = temp;           
}

// Call by reference using C++ reference Variables    recap: int a=&b same
// * replace &, and derefrence not done
void swapReferenceVar(int &a, int &b){
    int temp = a;           
    a = b;             
    b = temp;           
  
}

int main(){
    int x =4, y=5;
    
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    // swap(x, y); // This will not swap a and b
    // swapPointer(&x, &y); //This will swap a and b using pointer reference



    swapReferenceVar(x, y); //This will swap a and b using reference variables
   
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    return 0;
} 

*/

  int fun(int * a){
    return *a;
}
int main(){
    int a=2;
    fun(&a)=678;                  //as funct returning value of a ,this changes value of a from 2 to 6...
    cout<<"value="<<a<<endl;
}
