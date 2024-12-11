#include<iostream>
using namespace std;

class Complex{
    int a, b;
        // Below line means that non member - sumComplex funtion is allowed to do anything with my private parts (members) and can be declared any where in class
    friend Complex sumComplex(Complex o1, Complex o2);    //complex is becoz return type is complex           // to give access of private variable or func to function outside
    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }

        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex sumComplex(Complex o1, Complex o2){                 // in complex remember it returns complex so .........
    Complex o3;                                         //declaring o3 var in complex
    o3.setNumber((o1.a + o2.a), (o1.b+o2.b));                //access by _._ format see...
    return o3;
}

int main(){
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum=sumComplex(c1, c2);                                     //function returns complex object so here it is equated with complex object
    sum.printNumber();

    return 0;
}

/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/
