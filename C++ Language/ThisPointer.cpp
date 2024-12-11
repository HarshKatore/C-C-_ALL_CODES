#include<iostream>
using namespace std;
//use 1: we can give same name to the parameter in bracket by this keyword
class A{
    int a;
    public:
        void setData(int a){        ///here instead of another name like a1 we gave a
            this->a = a;            //syntax to set value in a :this.a or this->a
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};
int main(){
    A c;
    c.setData(4);      
    c.getData();
    return 0;
}


/*
//use 2:it is a keyword which is a pointer which points to the object which invokes the member function like a here
class A{
    int a;
    public:
         A & setData(int a){                       //     int & func(); type and it is returning address
            this->a = a;
            return *this;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
    A c;
    c.setData(4).getData();                   //after calling set number it is returning a pointer  to c and after and c.setdata.gatdata can also be executed 
    return 0;
}
*/