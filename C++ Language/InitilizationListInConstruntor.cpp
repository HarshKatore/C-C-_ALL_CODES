#include<iostream>
using namespace std;
class Test
{
    int a;                       //////////a is defined first
    int b;

public:
    Test(int i, int j) : a(i), b(j)       //syntax
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}
/*
basically it is another way of value assigning
    Test(int i, int j) : a(i), b(j)
    Test(int i, int j) : a(i), b(i+j)
    Test(int i, int j) : a(i), b(2*j)
    Test(int i, int j) : a(i), b(a+j)
    Test(int i, int j) :  b(j),a(i+b) ...........give error because a is defined first sop value initilization of a(i+b) take place 
                                                 first and b is not defined yet if we want to pre use of any variable like a initilize it first  

*/