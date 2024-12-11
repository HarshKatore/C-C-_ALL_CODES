/* include the header file < functional> 
A function object is a function wrapped in a class so that it is available as an object.

That is, we can then use a function as an objec
 to make them all usable in an Object-Oriented Programming paradigm. 
 basically it treats function AS OBJECT IE ITS A VARIOUS OPERATION ON ARRAY
*/
#include<iostream>
#include<functional>
#include<algorithm>
 
using namespace std;
 
int main(){
 
    // Function Objects (ALSO CALLED AS Functor) : A function wrapped in a class so that it is available like an object
    int arr[] = {1, 73, 4, 2, 54, 7};
    sort(arr,arr+5);                                   //default is ascending           and its range is till first 5 elements only SORT IS IN FUNCTIONAL 
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    printf("\n\n");
 
sort( arr, arr+6, greater< int >( ));                     //now it sorts in decending and for all six since arr+6 is there GREATER IS IN ALGORITHM HEADR=ER
for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}

//FOR MORE CPPREFRENCE.COM FUNCTORS
