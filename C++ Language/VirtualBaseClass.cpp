/* Class “A” is a parent class of two classes “B” and “C”
And both “B” and “C” classes are the parent of class “D”
The main thing to note here is that the data members and member functions of class “A” will be inherited twice in class “D” because class “B” 
and “C” are the parent classes of class “D” and they both are being derived from class “A”.

So when the class “D” will try to access the data member or member function of class “A” it will cause ambiguity for the compiler and the
 compiler will throw an error. To solve this ambiguity we will make class “A” as a virtual base class. To make a virtual base class “virtual” 
 keyword is used.
*/
#include <iostream> 
using namespace std; 
class A { 
public: 
    void say() 
    { 
        cout << "Hello world"<<endl; 
    } 
};





class B : public virtual A {                //likr this     .........
};   
class C : public virtual A {                 //like this.........
};   





class D : public B, public C { 
}; 
