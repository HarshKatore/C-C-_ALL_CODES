#include <iostream>
//only public and protected members are inheritable in respective mode in derived,, acc to table 
//privte of any class cant be used by other its property of that clss only only public members and protected can be used or copied by other class as private or public as that class members
using namespace std;
/* vimp **private variables ,functions cant be execut/called in main, but they can be cout or return  in class itself
*/
class Base
{
    int data1; // private by default and is********* not inheritable*******
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base :: setData(void)
{
    data1 = 10;
    data2 = 20;
}

int Base::getData1()
{
    return data1;
}

int Base::getData2()
{
    return data2;
}
class Derived : private Base
{ // public of base is now private members of deried
    
    int data3;

public:
    void process();
    void display();
};

void Derived ::process()
{   setData();
    data3 = data2 * getData1();   //get1data is called becoz its a private member of base so it is not inherited so special function is used
}

void Derived ::display()
{
    cout << "Value of data 1 is " << getData1() << endl;
    cout << "Value of data 2 is " << data2 << endl;
    cout << "Value of data 3 is " << data3 << endl;
}
int main()
{
    Derived der;
   // der.setData();   now its private
    der.process();
    der.display();
    // base.a;
    //base.data1 cant be called here           //its a basic concept not inher... concept
    return 0;
}
