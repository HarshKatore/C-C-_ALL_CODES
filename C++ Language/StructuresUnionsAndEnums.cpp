#include<iostream>
using namespace std;

typedef struct employee                   //now struct employee is a data type
{
    /* data */
    int eId; //4
    char favChar; //1
    float salary; //4
} ep;

union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};


int main(){
   

   

    // ep harry;                             //variable harry is initialise in struct employee data type
    // struct employee shubham;
    // struct employee rohanDas;
    // harry.eId = 1;
    // harry.favChar = 'c';
    // harry.salary = 120000000;
    // cout<<"The value is "<<harry.eId<<endl; 
    // cout<<"The value is "<<harry.favChar<<endl; 
    // cout<<"The value is "<<harry.salary<<endl; 



    //  union money m1;
    // m1.rice = 34;
    // m1.car = 'c';                           //it store garbage value
    // cout<<m1.car;                        
         // cout<<m1.rice;                        // only one value is stored at one time ow give error so it will give gar value


     enum Meal{ breakfast, lunch, dinner};                              // enum give index number of that word in return on giving that word in cout
    Meal m1 = lunch;                                // now m1=1;

    cout<<(m1==2);
     cout<<breakfast;
     cout<<lunch;
     cout<<dinner; 

    return 0;
}
