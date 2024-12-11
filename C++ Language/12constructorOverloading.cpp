#include <iostream>
using namespace std;
//overloading mens more than one function with same name
class Complex
{
    int a, b;

public:
    Complex(){        //   if no argument then default in {} execute
        a = 0;
        b =0;
    }

    Complex(int x, int y)         //both given thhen this
    {
        a = x;
        b = y;
    }

    Complex(int x){                 //only one ie first given then second defauult
        a = x;
        b = 0;
    }

  

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    Complex c1(4, 6);
    c1.printNumber();

    Complex c2(5);
    c2.printNumber();

    Complex c3;
    c3.printNumber();
    return 0;
}
