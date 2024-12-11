/*map means name and value paires
A map in C++ STL is an associative container which stores key value pairs. To elaborate, a map stores a key of some data type and its
 corresponding values of some data type. For example: a teacher wants to store the marks of students which in future can be accessed by their
  names. Here, keys are the student names, and their marks are the corresponding values. Refer to the illustration below:

 ======================= include the header file <map>.===========================

*/

#include<iostream>
#include<map>
#include<string>
 
using namespace std;
 
int main(){
 
    // Map is an associative array
    map<string, int>  marksMap;                       //here string is for name of the student
    marksMap["Atul"] = 58;
    marksMap["Rohit"] = 57;
    marksMap["Kishlay"] = 78;
    marksMap["Aditya"] = 65;
    marksMap["Sachin"] = 53;
 marksMap.insert( { {"Rohan", 89}, {"Akshat", 46} } );                         // another way for inserting
 
    map<string,int> :: iterator iter;                         //making iterator/ pointer
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)            //pointed to first
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";              //first print name AND second prints marks
    }
    
 
    return 0;
}

/*Syntax for using .insert is:

marksMap.insert({pair_1,pair_2......pair_n});
*/