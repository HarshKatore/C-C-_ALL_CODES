#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<' ';
        }
        for(int j2=0;j2<i+1;j2++){
        cout<<'*';
        }
        for(int j3=0;j3<i;j3++){
            cout<<'*';
        }
        cout<<endl;
    }
    return 0;
}