#include <bits/stdc++.h>

using namespace std;
    void merge(int *arr, int s, int e){
        int mid=(s+e)/2;
        int len1=mid-s+1;
        int len2=e-mid;
       
        int* first=new int[len1];
        int* second=new int[len2];
       
        int idx=s;
        for(int i=0;i<len1;i++){
            first[i]=arr[idx++];
        }
        idx=mid+1;
        for(int i=0;i<len2;i++){
            second[i]=arr[idx++];
        }
       
        int i1=0,i2=0;
        idx=s;
       
        while(i1<len1 && i2<len2){
            if(first[i1]<second[i2]){
                arr[idx++]=first[i1++];
            }
            else{
                arr[idx++]=second[i2++];
            }
        }
       
        while(i1<len1) arr[idx++]=first[i1++];
       
        while(i2<len2) arr[idx++]=second[i2++];
       
        delete []first;
        delete []second;
    }
    void mergeSort(int *arr, int s, int e){
       
    if(s>=e){return;}
    int mid=(s+e)/2;
        mergeSort(arr,s,mid);
        mergeSort(arr,mid+1,e);
        merge(arr,s,e);
    }
   
   
int main()
{   cout<<"Enter the size of array to be sort:="<<endl;
    int n;
    cin>>n;
    cout<<"Enter the array to be sort:="<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    mergeSort(arr,0,n-1);
    cout<<"Sorted array is:="<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

