#include<iostream>
using namespace std;
//arrow is used in structure and here
class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

};
int main(){
    Complex *ptr = new Complex;
    (*ptr).setData(1, 54); 
    (*ptr).getData();

     //is same as below
   
    ptr->setData(1, 54);
    ptr->getData(); 



    // Array of Objects ........next concept
    Complex *ptr1 = new Complex[4];          //   same as array making  pointer of data type derive is made and pointed using new operator to array  of data type derivd 
    ptr1->setData(1, 4); 
    ptr1->getData();
    return 0;
}
