#include<bits/stdc++.h>
using namespace std;

void processArray(vector<int>&arr){
    vector<int>arr2;
    arr2=arr;
    arr.clear();
    int i=0;
    int c=0;
    while(i!=arr2.size()){
        
        if(arr2[i]<100 && c==0){ arr.push_back(arr2[i++]);}
        else if(arr[i]>=100){
            c++;
            i++;
        }
        else if(c==1) {arr.push_back(arr2[i-1]);  c=0;}
        else if(c>1) {arr.push_back(c);  c=0; }
    }
    if(c>1) {arr.push_back(c); }
    else if(c==1) {arr.push_back(arr2.back()); }
}
int main(){
    vector<int>arr;
    while(1){
        int a=0;
        cin>>a;
        if(a<0)break;
        arr.push_back(a);
    }

    processArray(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}