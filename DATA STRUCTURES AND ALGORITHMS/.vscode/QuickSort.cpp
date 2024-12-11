#include<bits/stdc++.h>
using namespace std;
int part(int *arr,int s,int e){
int pivt=arr[s];
int cnt=0;
for(int i=s+1;i<=e;i++){
    if(arr[i]<=pivt)cnt++;
}
int pvtidx=cnt+s;
swap(arr[pvtidx],arr[s]);
int i=s,j=e;
while(i<pvtidx && j> pvtidx){
    while(arr[i]<=arr[pvtidx])i++;
    while(arr[j]>arr[pvtidx])j--;
    if(i<pvtidx && j>pvtidx)
    swap(arr[i++],arr[j--]);
}
return pvtidx;
}


void quickSort(int *arr,int s,int e){
    if(s>=e) return ;
    int p=part(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}
int main(){
    cout<<"Enter the size of array to be sort:="<<endl;
    int n;
    cin>>n;
    cout<<"Enter the array to be sort:="<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    quickSort(arr,0,n-1);
    cout<<"Sorted array is:="<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    return 0;
}