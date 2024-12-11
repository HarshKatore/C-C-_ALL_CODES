#include<iostream>
using namespace std;
class array{
    public:
   int size, capacity;
   int *arr;
   array(int s,int c,int *a):size(s),capacity(c),arr(a){}
    
 int   indexInsertion(int num,int index){
if(size>=capacity){
return -1;
    }
    for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=num;
    size++;
    return 1;
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
   int capacity=20;
      int arr[20]={10,16,45,56,9,43};                     //for insertion we must have extra reserved space for inserted element ow it give error
array a(size,capacity,arr);
      
    int num=19;
     int index=5;
    a.traversal();
    int k=a.indexInsertion(num,index);
    if(k==-1){
        cout<<"error"<<endl;
    }
    else{
    a.traversal();

    }
    
    
    
    return 0;
}