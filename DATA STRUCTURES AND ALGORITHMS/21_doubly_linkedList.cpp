#include<iostream>
using namespace std;

 struct node{
    int data;                                      
    struct node* prev;
    struct node* next;
 };
 void traversal(struct node* ptr){
    while(ptr != NULL){
    cout<<"element"<<ptr->data<<endl;
    ptr=ptr->next;
 }}
 
 void oppTraversal(struct node* ptr){
    while(ptr != NULL){
    cout<<"element"<<ptr->data<<endl;
    ptr=ptr->prev;
 }}
 
 

int main(){
    struct node*head=new struct node;                    
    struct node*second=new struct node;
    struct node*third=new struct node;
    struct node*fourth=new struct node;

    head->data=11;                          
    head->prev=NULL;
    head->next=second;
    second->data=22;                          
    second->prev=head;                          
    second->next=third;
    third->data=33;                          
    third->prev=second;
    third->next=fourth;
    fourth->data=44;                          
    fourth->prev=third;
    fourth->next=NULL;
    traversal(head);
    oppTraversal(fourth);
    return 0;
} 