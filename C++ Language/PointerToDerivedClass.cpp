//display has polymeric forms and binding or flow is decided by compile time approch
#include<iostream>
using namespace std;
class BaseClass{
    public:
        int var_base;
        void display(){
            cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
            int var_derived;
            void display(){
                cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
                cout<<"Dispalying Derived class variable var_derived "<<var_derived<<endl;
            }
};
int main(){
    BaseClass * base_class_pointer;                //base class type  pointer
    BaseClass obj_base;                               //base class type object
    DerivedClass obj_derived;                           //derived type object 
    base_class_pointer = &obj_derived; // Pointing base class pointer to derived class

    base_class_pointer->var_base = 34;                //simply assigning value
    // base_class_pointer->var_derived= 134; // Will throw an error
    base_class_pointer->display();                         //it will run  display of base 

    base_class_pointer->var_base = 3400; 
    base_class_pointer->display();

    DerivedClass * derived_class_pointer;             //now its a pointer of derived class type so display of bderived is executed   ...compile time polymorphism
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 9448;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();

    return 0;
}
