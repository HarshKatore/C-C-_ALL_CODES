#include<iostream>
using namespace std;
class array{
    public:
    int size;
    int used;
    int* p;
    array(int s,int u){
        size=s;
        used=u;
        p=new int[s];
        }
        void set(int u){
            for(int i=0;i<u;i++){
            cout<<"enter values in an array:"<<endl;
            cin>>p[i];
            }
        }
        void get(int u){
            cout<<"values in an array are:\n"<<endl;
            for(int i=0;i<u;i++){
            cout<<p[i]<<endl;
            }
        }
    
};
int main(){ int s,u;
     cout<<"enter size of an array:"<<endl;
            cin>>s;
             cout<<"enter total no of elements:"<<endl;
            cin>>u;
    array a(s,u);
    a.set(u);
    a.get(u);
    return 0;
}