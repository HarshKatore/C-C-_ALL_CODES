-#include<iostream>
using namespace std;
//_______________________________ambiguity 1________________________
//if in multiple heritance, functions with same name exist in both base class then we have to mention which should be preffered in derived class
class Base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};

class Base2{
    public:
        void greet()
        {
            cout << "Kaise ho?" << endl;
        }
};


class Derived : public Base1, public Base2{
   int a;
   public:
    void greet(){
        Base2 :: greet();            //like this ..........
    }
};
//_______________________________ambiguity 2________________________
//if their is same function in base as well as derived class then priority is given to derived itself
class B{
    public:
        void say(){
            cout<<"Hello world"<<endl;
        }
};

class D: public B{
    int a;
    // D's new say() method will override base class's say() method
    public:
        void say()
        {
            cout << "Hello my beautiful people" << endl;
        }
};

int main(){
  // Ambibuity 1
     Base1 base1obj;
     Base2 base2obj;
     base1obj.greet();
     base2obj.greet();
     Derived d;
     d.greet();

     
    // Ambibuity 2
    

    D p;
    p.say();

    return 0;
}


