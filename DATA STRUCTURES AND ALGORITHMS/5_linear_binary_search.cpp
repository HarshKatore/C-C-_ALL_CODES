#include<iostream>
using namespace std;

    class linearsearch{
        public:
        int* arr;
        int size;
        linearsearch(int *p,int q):arr(p),size(q){}
        int linear(int element){
        for(int i=0;i<size;i++){
            if(arr[i]==element){
                return i;
            }
        }
        return -1;
        }
       
    };
    class binarysearch{
       public: 
       int* arr;
        int size;
        binarysearch(int *p,int q):arr(p),size(q){}

         int binary(int element){
        int begin=0,end=size-1;

        while(begin<=end){                          //take pen paper while doing loop like... for  or while loop here at last we want to compare element to be search with begin and end as well so = along with <
        int mid=(begin+end)/2;
            if(arr[mid]==element){                    //loop executes till condition in loop is satisfying
            return mid;
            }
            if(arr[mid]<element){
            begin=mid+1;
            }
            else{
           end=mid-1;
            }
           
            
        }
         return -1;
        }
    };
int main(){
    int ar[]={1,43,23,77,87,65,87};              //no extra space reserved like other operations ow size will count this space also
     int size=sizeof(ar)/sizeof(int);
    linearsearch lin(ar,size);
    int element=77;
     cout<<"possition:"<< lin.linear(element)<<endl;

    int ar2[]={1,29,30,47,59,69,79,80,93};                  //for binary search array must be sorted ........IMP
     int size2=sizeof(ar2)/sizeof(int);
    binarysearch bin(ar2,size2);
    int element2=30;
    int p=bin.binary(element2);
    cout<<"possition:"<<p<<endl;
   
    return 0;
}   