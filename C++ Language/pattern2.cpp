#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j1=0;j1<n-i;j1++){
            cout<<j1+1;
        }
        for(int j2=0;j2<2*i;j2++){
            cout<<'*';
        }
        for(int j3=0;j3<n-i;j3++){
            cout<<n-j3-i;
        }
        cout<<endl;
    }
    return 0;
}