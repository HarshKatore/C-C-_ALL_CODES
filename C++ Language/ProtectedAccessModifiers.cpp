/* protected is betn private and public 
ie protected var and func are private but they get inherited ie they can be used in derived class but not called/ executed in main used when 
we want to use private in derived but also want to keep private


  type of vis. mode-->  Public Derivation      	Private Derivation    	Protected Derivation
Private members         Not Inherited         	Not Inherited         	Not Inherited              
Protected members     	Protected               Private               	Protected                    
Public members          Public              	Private                 Protected                    

*/
#include<iostream>
using namespace std;

class Base{
    protected:
        int a; 
    private:
        int b;

};

class Derived: protected Base{
   
};

int main(){
    Base c;
    Derived d;
    // cout<<c.a; // Will not work since a is protected in both base as well as derived class
    return 0;
}

