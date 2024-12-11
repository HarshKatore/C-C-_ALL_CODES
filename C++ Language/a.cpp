#include<iostream>
using namespace std;
class student {
     private: 
                int a, b;
    public: 
    int c ,d;
    int sum(int c ,int d);
    int twist(int c, int d);
};
int student::sum ( int c,int d){
  cout<<c+d<<endl;
    return 0;
}
int student::twist ( int c,int d){
    a=c;
    b=d;
   cout<<a<<endl; 
   cout<<b<<endl; 
}

int main(){
    student harsh;
    harsh.sum(9,9);
    harsh.twist(6,7);
//cout<<harsh.a<<endl;             //error but ....c can be done
    return 0;
}