#include<iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void getData(void){
            cout<<"Code of this item is "<< id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }
};
int main(){
    int size = 3;
    ShopItem *ptr = new ShopItem [size];           //[]array can be made but () value not given ,like constructor
    ShopItem *ptrTemp = ptr;             //  ptrtmp is made becoz after first for loop ptr  will be pointing  to something else
    int p, i;
    float q;
    for (i = 0; i < size; i++)  //for loop to do setdata for all 3
    {
        cout<<"Enter Id and price of item "<< i+1<<endl;
        cin>>p>>q;
        // (*ptr).setData(p, q);
        ptr->setData(p, q);
        ptr++; 
    }

    for (i = 0; i < size; i++)                 //to do getdata of all 3
    {
        cout<<"Item number: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    
    
    return 0;
}
