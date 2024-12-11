#include<iostream>
using namespace std;
//traversal=visiting each element of an array [see]
class array{
    public:
   int size;
   int *arr;
   array(int s,int *a):size(s),arr(a){}
    
 int   indexdeletion(int index){

    for(int i=index;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    size-=1;
 }
    void traversal(){
        for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    }
};

int main(){
    int size=6;
      int arr[20]={10,16,45,56,9,43};
array a(size,arr);
     int index=1;
    a.traversal();
    a.indexdeletion(index);
    a.traversal();
 return 0;
}