#include<iostream>
using namespace std;


class Number{
    int a;
    public:
        Number(){             //thi default const.. should be always be given at least: number(){}
            a = 0;
        }

        Number(int num){
            a = num;
        }
        // When no copy constructor is found, compiler supplies its own copy constructor
        Number(Number &obj){                      // if we do not write copy con like this its fine but for any extra task like below then have to do this
            cout<<"Copy constructor called!!!"<<endl;
            a = obj.a;
        }

        void display(){
            cout<<"The number for this object is "<< a <<endl;
        }
};
int main(){
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    Number z1(z); // Copy constructor invoked   value given at the time of init...
    z1.display();

    z2 = z; // Copy constructor not called        copy constructor should be given object to copy at the time of initilization only this seperate do not work
    z2.display();

    Number z3 = z; // Copy constructor invoked
    z3.display();

    // z1 should exactly resemble z  or x or y

    return 0;
}
