#include<iostream>
#include<iomanip>                             // this library have setw function which is a manupulator,endl is in iostream
#define pi 3.14; 
using namespace std;

int main(){
    // int a = 34; 
    // cout<<"The value of a was: "<<a;
    // a = 45; 
    // cout<<"The value of a is: "<<a;
    // Constants in C++
    // const int a = 3;                                                 //const is used to fix the value of variable ,give error if try to change
    // cout<<"The value of a was: "<<a<<endl;
    // a = 45; // You will get an error because a is a constant
    // cout<<"The value of a is: "<<a<<endl;



    // Manipulators in C++
    // int a =3, b=78, c=1233;
    // cout<<"The value of a without setw is: "<<a<<endl;
    // cout<<"The value of b without setw is: "<<b<<endl;
    // cout<<"The value of c without setw is: "<<c<<endl;

    // cout<<"The value of a is: "<<setw(4)<<a<<endl;                           //___3
    // cout<<"The value of b is: "<<setw(4)<<b<<endl;                         //it assignes some space for op,leaves spaces before if not required    __78
    // cout<<"The value of c is: "<<setw(4)<<c<<endl;                           // 1233


    // Operator Precedence
    int a =3, b=4;
    // int c = (a*5)+b;
    int c = ((((a*5)+b)-45)+87);    //  * has high pres.. so first then +- has same pres so checked ass and
                                  // it is left to r so after * remaining execution is done left to right  accordingly give brackets as aside
    cout<<c;
    return 0;
}
