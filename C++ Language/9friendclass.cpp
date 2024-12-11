#include<iostream>
using namespace std;
//forward declaration
class complex ;
class calculator{
    public:

    int sumRealComplex(complex , complex);
       int sumCompComplex(complex , complex);
    
};

class complex{
    int a, b;   
    // INDIVIDUALLY declare functions in class as friends  
   friend int calculator    :: sumRealComplex(complex , complex );
   friend int calculator    :: sumCompComplex(complex , complex );
   //whole class as friend at a time
  // friend class calculator;
        public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }

        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
int calculator :: sumRealComplex(complex p1,complex p2){                            // use 1 2 format only when same function in class is used multiple time
return (p1.a+ p2.a);
}
int calculator :: sumCompComplex(complex p1,complex p2){
return (p1.b+ p2.b);
}

int main()
{
    complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumCompComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << resc << endl;
    return 0;
}
