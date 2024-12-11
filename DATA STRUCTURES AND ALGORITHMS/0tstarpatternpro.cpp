#include<iostream>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    for( i=0;i<n;i++){
        for(int j=0;j<(2*n-1);j++){
            if( (n-i-2)<j && j<(n+i) ){            //vimp::: multiple conditions should be in && , || condition ow it will not work 
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}