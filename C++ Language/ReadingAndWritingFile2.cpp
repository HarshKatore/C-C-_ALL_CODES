#include<iostream>
#include<fstream>
//for taking ip to str from file there are two ways study them seperately
using namespace std;

int main(){
    string st2;                                                                     //make string
    // Opening files using constructor and reading it
    ifstream obj("sample60b.txt"); // Read operation                                //objct of base function ifstr....   represent file
    //obj>>st2;                          //input sign used >>
    getline(obj, st2);                    //optional to above but supports whte spaces     //taking file ie obj into string
    cout<<st2;                                                                               //cout string

    return 0;
}
