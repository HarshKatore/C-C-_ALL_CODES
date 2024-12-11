/* These are some useful classes for working with files in C++

fstreambase                                   //base class
ifstream --> derived from fstreambase         //for input to string from file
ofstream --> derived from fstreambase          //for op to str from file

In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:

Using the constructor (here we use)
Using the member function open() of the class


#include<fstream>
//file must be empty
using namespace std;

int main(){
    string st = "Harry bhai";                       //making string
    // Opening files using constructor and writing it
    ofstream obj("sample60.txt"); // Write operation                  //making object of base class ofstream ie objrct which represents file 
    obj<<st;                    //<<is output sign so used                                      //taling string  in object ie **file see file

    return 0;
}
*/