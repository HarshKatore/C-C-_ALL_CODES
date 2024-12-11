/* basically its also array but it uses  iterator most (iterator is similar to pointer )
A List is a bi-directional linear storage of elements. Few key features as to why a list should be used is, 

It gives faster insertion and deletion operations.
Its access to random elements is slow.

An array stores the elements in a contiguous manner in which inserting some element calls for a shift of other elements, which is time taking.
 But in a list, we can simply change the address the pointer is pointing to.

 Before using lists, we must include the header file=========== <list>.================
*/

#include<iostream>
#include<list>
 
using namespace std;
 
void display(list<int> &lst){                    //LST
    list<int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)                       // /weuse end(): function which indicate last ememem=nt
    {
        cout<<*it<<" ";
    }
    printf("\n\n");
    
}
 
int main(){
    
    list<int> list1;  //empty list of 0 length but even we do not mention size we can store any no of elements
    //list<int> list2(9);         empty of size 9

 
    list1.push_back(5);                         //without using iterator its pretty similar to vectos
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
 
    display(list1);
 //////////////////////////////////////////////////  
    list<int> list2(3);  //empty list of length 3
    list<int> :: iterator it = list2.begin();                    //giving refrence of first element of array
    *it = 45;                                         //giving value in array 
    cout<<*it<<" ";                        //to print 
    it++;
    *it = 6;
    it++;
    *it = 9;
    it++;
 
    display(list2);                          //here we give refrence/address of list to display 
 
   //////////////////////////////////////////////////// DELETION 


    list1.pop_back();                                     //pop=delete ,back
    display(list1);                                         //done on list 1

    list1.pop_front();                                   //dldete from front 
    display(list1);

   
    
    list<int> list3;  //empty list of 0 length
 
    list3.push_back(5);
    list3.push_back(7);
    list3.push_back(1);
    list3.push_back(9);
    list3.push_back(9);
    list3.push_back(12);
    
    list3.remove(9);                      //remove(); function removes all 9 from list 
    display(list3);
 

 /////////////////////////////////////
 list<int> list4;  //empty list of 0 length
 
    list4.push_back(6);
    list4.push_back(2);
    list4.push_back(4);
    list4.push_back(3);
    list4.push_back(5);
    list4.push_back(1);
    display(list4);                      
 list<int> list5;  //empty list of 0 length
 
    list5.push_back(9);
    list5.push_back(8);
    list5.push_back(7);
    list5.push_back(12);
    list5.push_back(11);
    list5.push_back(10);
    display(list5);                      

    //list4.sort();                       //sorting::ascending order
  //  display(list4);
 
 //  list4.merge(list5);                      //list1 and list 4 merge and stored in list 4
    //display(list4);
    list5.sort();                       //sorting and merging simultaneously
    display(list5);
    list4.sort();                      
    display(list4);
    list4.merge(list5);                      //list5 and list 4 both sorted  and then merge and stored in list 4
    display(list4);


    //////////////////////////////////////////////////
    list<int> list6;  //empty list of 0 length
 
    list6.push_back(9);
    list6.push_back(8);
    list6.push_back(7);
    list6.push_back(12);
    list6.push_back(11);
    list6.push_back(10);
    list6.reverse();
    display(list6);                      


    return 0;
} 