#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;                                              //    extraordinaryly it preserves the count for all the variable not difft difft for difft variable eg hary lovish .... 

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void){                                         //static function which uses only static variables
        // cout<<id; // throws an error
        cout<<"The value of count is "<<count<<endl;
    }
};

// Count is the static data member of class Employee
int Employee::count; // Default value is 0                                static is default so no need to initialize for 0,if want for another
                                                                          // value then declate in this line  only eg .....count =1000;
                                                                        // this function like delare is also required to use static variable
int main()
{
    Employee harry, rohan, lovish;
    // harry.id = 1;
    // harry.count=1; // cannot do this as id and count are private

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}
