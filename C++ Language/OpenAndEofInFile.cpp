#include <iostream>
#include <fstream>
 //second way of opening file first make object and then open seperately
using namespace std;
 
int main()
{
 
    // declaring an object of the type ofstream
    ofstream out;
 
    //connecting the object out to the text file using the member function open()
    out.open("sample60.txt");                                                        //syntax
 
    //writing to the file
    out <<"This is me\n";
    out <<"This is also me";
    out <<"harsh is my name";
    //closing the file connection
    out.close();



  

    //declaring string variable st
    string st;
    // declaring an object of the type ifstream
    ifstream in;
    //opening the text file into in
    in.open("sample60.txt");
 
    // giving output the string lines by storing in st until the file reaches the end of it
    while (in.eof()==0)                                                              //ie end        //used to give terminating condition of while loop  when multiple lines have to print 
    {
        // using getline to fill the whole line in st
        getline(in,st);                                                             //getline only copyoes like in>>st it also need cout
        cout<<st<<endl;
    }
   

    return 0;
}
