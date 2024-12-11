#include<iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value 
int count=0;

class num{
    public:
        num(){
            count++;
            cout<<"This is the time when constructor is called for object number"<<count<<endl;
        }

        ~num(){         //ONLY ~NUM(){}   IS ENOUGH   BUT IF HAVE TO DO TASK LIKE DYNAMIC MEMORY FREE AND ...... IT IS VERY USEFUL ALL TASK WHICH HAVE TO EXECUTE AT END  
            cout<<"This is the time when my destructor is called for object number"<<count<<endl;
            count--;
        }
};
int main(){
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {                                                  //WHEN SCOPE OF OBJECT END DESTRUCTOR EXECUTES
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}
