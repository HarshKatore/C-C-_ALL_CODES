#include<iostream>
using namespace std;
class harsh {
public:
int a;
harsh (int i):a(i){

}
void print(){
    cout<<a<<endl;
}

};
int main(){
    harsh *p= new harsh(5);       
    
    p->print();
    return 0;
}
