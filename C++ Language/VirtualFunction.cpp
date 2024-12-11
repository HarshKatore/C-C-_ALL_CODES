/*now virtual is used to direct the flow of function to the same name function function in derived class when base 
class pointer poiunts to derived onject
its a run time polymorphism 
binding/flow  is not conventional
*/
#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base=1;
        virtual void display(){                                       //here virtual keyword is used so
            cout<<"1 Dispalying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
            int var_derived=2;
            void display(){
                cout<<"2 Dispalying Base class variable var_base "<<var_base<<endl;
                cout<<"2 Dispalying Derived class variable var_derived "<<var_derived<<endl;
            }
};
int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();              //now base display is virtual so display of derived is executed but if compiler do not 
    //                                           find display in derived it will execute base display
    return 0;
}