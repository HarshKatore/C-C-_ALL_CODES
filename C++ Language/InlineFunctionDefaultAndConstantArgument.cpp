#include<iostream>
using namespace std;

inline int product(int a, int b){
    //used when fuction is called for same value multiple times ,it imparts the code in main function so purpose of using func is vanished
    //not to use with static var,loops,recursion,use only if code is very simple 
    // Not recommended to use below lines with inline functions
    // static int c=0; // This executes only once
    // c = c + 1; // Next time this function is run, the value of c will be retained
    return a*b;
}


float moneyReceived(int currentMoney, float factor=1.04){     //default value is given to argument as if there is  no input argument then it 
                                                               //consider it and confired ones are always written first then default 
    return currentMoney * factor;
}

// int strlen(const char *p){            //in string and pointers const is done to avoid changes in them 

// }
int main(){
    int a, b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<< "Rs after 1 year"<<endl;   //factor not given
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 1.1)<< " Rs after 1 year";   //given
    return 0;
}
