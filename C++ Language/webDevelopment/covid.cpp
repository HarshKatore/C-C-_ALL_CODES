#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct covidReport{
  int * No_of_patients;
  string city;
};

void sort( covidReport  a[] , int length){
   
    for(int i=0;i<length-1;i++){
        
         int flag=0;
        for(int j=0;j<length-1-i;j++){
            if(*(a[j+1].No_of_patients) < *(a[j].No_of_patients)){
               // cout <<"ho";
                covidReport s=a[j+1];
               
                a[j+1]=a[j];
                a[j]=s;
                flag=1;
            }
            
        }
        if(flag==0){break;}
    }
    return ;
}
int main(){
    
   covidReport a[5];
    int Pune=10;
    a[1].city="Pune" ;
    a[1].No_of_patients= & Pune;
    
    int Mumbai=35;
    a[2].city= "Mumbai";
    a[2].No_of_patients= &Mumbai;
    
    int Nagpur=22;
    a[3].city="Nagpur";
    a[3].No_of_patients= &Nagpur;
    
    int Bhopal=5;
    a[4].city= "Bhopal" ;
    a[4].No_of_patients= &Bhopal;
    
    int Indore=3;
    a[5].city= "Indore";
    a[5].No_of_patients= &Indore;
    
    sort(a,5);
    
    for(int i=0;i<5;i++){
   
        cout<< a[i].city<<"->"<<*(a[i].No_of_patients)  <<endl;
    }
    return 0;
}