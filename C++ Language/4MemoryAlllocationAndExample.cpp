#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];                                 //like string
    int itemPrice[100];
    int counter;

public:
    void initCounter(void)
     { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;                                     // every time after using setprice counter increments it helps to count no of products
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();                         // everything is for difft difft product
    dukaan.setPrice();
    dukaan.setPrice();                         // struct of funct
    dukaan.displayPrice();
    return 0;
}
