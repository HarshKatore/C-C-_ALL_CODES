#include<iostream>
//name of each node is not important only we have to maintain head correctly we dont access by name acces by traversing starting from head
using namespace std;

 struct node{
    int data;                                       //data can be of any type
    struct node* next;
 };
 void traversal(struct node* ptr){
    while(ptr != NULL){
    cout<<"element"<<ptr->data<<endl;
    ptr=ptr->next;
 }}

int main(){
    // declaration and Allocate memory for nodes in the linked list in Heap
    struct node*head=new struct node;                    //same as int* a=new int;          //for pointer to class and structure we use -> operator or we have to derefrence that ptr then use(ptr*).data
    struct node*second=new struct node;
    struct node*third=new struct node;
    struct node*fourth=new struct node;

    head->data=11;                           // Link first and second nodes
    head->next=second;
    second->data=22;                          // Link second and third nodes
    second->next=third;
    third->data=33;                          // Link third and fourth nodes
    third->next=fourth;
    fourth->data=44;                           // Terminate the list at the third node
    fourth->next=NULL;

    traversal(head);
    return 0;
}