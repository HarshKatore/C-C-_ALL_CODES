\
#include<iostream>
using namespace std;
class Y;

class X{
    int data;
    public:
        void setValue(int value){
            data = value;
        }
    friend void add(X, Y);   //takes ip : object of type x and y ..// here friend function uses  the class which is not declared yet so forward decl
};

class Y{
    int num;
    public:
        void setValue(int value){
            num = value;
        }
    friend void add(X, Y);    

};

void add(X o1, Y o2){                  //dont see 1 or 2 nd itration see its a one object of x type and one obj of y type which is input from main function
    cout<<"Summing data of X and Y objects gives me "<< o1.data + o2.num;
}

int main(){
    X a1;
    a1.setValue(3);

    Y b1;
    b1.setValue(15);

    add(a1, b1);                    //in this type of function we give whole variable delared in that data type
    return 0;
}