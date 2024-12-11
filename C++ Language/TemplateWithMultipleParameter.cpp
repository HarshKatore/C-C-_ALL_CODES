#include<iostream>
using namespace std;
//making template with multiple data type like t1 and t2 eg any dt can be given to t1,t2 here

template<class T1, class T2>
class myClass{
    public:
        T1 data1;
        T2 data2;
        myClass(T1 a,T2 b){
            data1 = a;
            data2 = b;
        }
    void display(){
        cout<<data1<<endl<<data2<<endl;
    }
};
int main()
{
    myClass<int, char> obj(1, 'c');
    obj.display();



    myClass<int, float> obj2(1,1.8 );
    obj2.display();
}
