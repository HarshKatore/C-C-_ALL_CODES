#include<iostream>
using namespace std;
 

template<class T1, class T2>
float funcAverage(T1 a, T2 b){
    float avg= (a+b)/2.0;             //for getting float value in arithmatic operation at least one float come in calculation like 2.0 here ow int would be  returned
    return avg;
}

int main(){
    float a;
    a = funcAverage(5,2);                               //here t1 t1 are int int by value itself they get set no need of<> like class
    printf("The average of these numbers is %.3f\n",a);
    float b;
    b = funcAverage(5,2.8);                             //here int float
    printf("The average of these numbers is %.3f",b);
    return 0;
}