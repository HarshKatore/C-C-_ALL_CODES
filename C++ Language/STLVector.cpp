/* study all ,methods properly  
vector is fast for access but slow for insert delete as memory is sequential so after delete all elements need to display 
speciality no need to mention size of array prior 
it can make array of float char ....




SYNTAX***********
#include<iostream>
#include<vector>
 
int main(){
 
    vector<int> vec1;
    return 0;
}
******vector*******
One benefit of using vectors, is that we can insert as many elements we want in a vector, without having to put some size parameter as in an 
array. In an array of 10 elements, for adding the 11th one, we’ll have to make an array again.

Vectors provide certain methods to be used to access and utilise the elements of a vector, first one being, the push_back method. To access all
 the methods and member functions in detail, you can visit this site , std::vector - C++ Reference. This will be very handy and useful to you. 
  I’ll show you how some of them work in a program


 ************ push_back() and size():************************
 First of all, don't forget to include the header file, <vector>.
Vectors have a method, push_back(), to insert elements in it from the rear end.
We’ll define a variable, size, to store the size of the vector.
We’ll then run a loop of size length, to receive the user input and push them back in the vector vec1.
We’ll then call the display function.
We want to have a display function to display the contents of the vector. And pass reference of vec1 to the function.
We have another method size() which returns the size of the vector. We’ll use this to traverse through all the elements and print them.
So, this is how a vector gets used.


*************pop_back():*****************
This method of vectors, deletes the last element of the vector. 



*****************Insert (iterator, element to insert):*********************
This method of vectors inserts an element to the position the iterator is pointing to. Now how to evoke that iterator? Refer to the snippet
 and the output below:

We can generate an iterator using the scope resolution iterator by the following syntax:

  vector<int> :: iterator iter = vec1.begin();

 ******************** Declaring a vector iterator

Using begin () points the iterator to the starting of the vector. We can now increment the pointer according to our choice and insert any
 element at that position.

 Output of the above program




*/
//************ all this functioin are in cplusplus.com vectors

#include<iostream>
#include<vector>
using namespace std;

void display (vector<int> &v){
    for (int i = 0; i < v.size(); i++)                          //here v.size used
    {
        cout<<v[i]<<" ";                  //'' for space only endl goes to mnew line
        // cout<<v.at(i)<<" ";          .at() keyword to give value at that position on cout
//Similarly, v.at(i) can be used instead of v[i]. They will work the same.
    }
    cout<<endl;
}
int main(){ 
    vector<int> vec1;        //make int type array             feature is iut o not need size pre entered like array
    int element, size;           
    cout<<"Enter the size of your vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an element to add to this vector: ";
        cin>>element;
        vec1.push_back(element);                               //vector.pushback used to put value in array from backside
       /* by compile time array giving
        vec1.push_back(2);                           //vector.pushback used to put value in array from backside
        vec1.push_back(6);                           //vector.pushback used to put value in array from backside
        vec1.push_back(8);                           //vector.pushback used to put value in array from backside
          now its  array of size 3 of element 2 6 8 
          */
    }
    display(vec1);   
                       //give address of that vector to function
                   
    vec1.pop_back();                             //this fuction remove value from back simmlly  pop_front is there diffft from push back

    display(vec1);
    //**** iterator
    vector<int>:: iterator iter= vec1.begin();          //it is a pointer and is pointed to the first element of array
    vec1.insert(iter,556);                                //keyword or function in stl to insert in any position of array
    display(vec1); 
    vec1.insert(iter+1,556);                                // insert in any position 2 of array
    display(vec1); 
    vec1.insert(iter+1,50,556);                              //inset 50 copies of 556 in position 2                                // insert in any position 2 of array
    display(vec1); 
    return 0;
}
   

  /* 
  ways to declare vectors:


   vector<int> vec1;      //zero length integer vector ie size not pre defined 
    vector<char> vec2(4);  //4-element character vector ie size is 4
    vector<char> vec3(vec2);//4-element character vector from vec2 ie3 copied 2
    vector<int> vec4(6,3); //6-element vector of 3s ie all 3 

 First one is a vector with no length and elements specified.
Second one is a vector of length 4 and no elements.
Third one is a vector made from the second one.
And last one, is a vector with length 6 and all the elements being 3.

can try running following:

vector<int> vec1; 
display(vec1);                   coad run succssfully but no value is printed becoz no push back done 

 vector<char> vec2(4);
 vec2.push_back('5');
 display(vec2);                      op is 5 only

   vector<char> vec3(vec2);
   display(vec3);                   op is similar to what is in vec 2 at the time of compilation


 vector<int> vec4(6,3); 
 display(vec4);                     op 3 3 3 3 3 3 


*/
    






