/*Note:

vm defines mode of public members of base class in derived class
Default visibility mode is private
Public Visibility Mode: Public members of the base class becomes Public members of the derived class
Private Visibility Mode: Public members of the base class become private members of the derived class
Private members are never inherited  private not of base and nor of derived so dont even  call them
*/
#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}                       //required in dc
};

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee         //if we do not write public here itbecomes private default
{
public:
    int languageCode;
    Programmer(int inpId)          //its a construtor of program class but it needs default constructor of base class so write 
    {
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;  //id variable is public and derived class also so printing possible
    }
};
int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    skillF.getData();
    return 0;
}
