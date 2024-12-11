# include<iostream>

using namespace std;
int glo = 6;  //global
void sum(){
    int a; 
    cout<< glo;
    }

int main(){
    int glo=9;
    glo=78;      //same varianle in local has precision
    // int a = 14;
    // int b = 15;
    int a=14, b=15;
    float pi=3.14;                //double is float with more digit after point
    char c ='d';       //char use single quot  ,int not ,string use single quot(run time input ,exception "" wioth no \0) ,array not
    bool is_true = false;     //bool takes true or false and returns 1 or 0 
    sum();                 //op 6
    cout<<glo<< is_true;     //78 then 0
     cout<<"\nThe value of pi is: "<<pi;
     cout<<"This is tutorial 4.\nHere the value of a is "<<a<<".\nThe value of b is "<< b;  // a is out of"" so its value print, see \n use 
     cout<<"\nThe value of c is: "<<c;
    return 0;
}
