 //head=deleteFirst(head);                 .................O(1)
    //head=deleteAtIndex(head,2);          .................O(n)
     //head=deleteLast(head);              .................O(n)
   // head=deleteAtValue(head,22);         .................O(n)
#include<iostream>
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

    struct node* deleteFirst(struct node * head){
        struct node * ptr= head;
        head =head->next;
        delete ptr;
        return head;
    }


    struct node* deleteAtIndex(struct node * head , int index){
        struct node * p= head;
        struct node * q= head->next;
        int i=0;
       while(i!=index-1){
       p=p->next;
       q=q->next;
       i+=1;
       }
       p->next=q->next;
       delete q;
        return head;

    }
    struct node* deleteLast(struct node * head ){
        struct node * p= head;
        struct node * q= head->next;
       while(q->next!=NULL){
       p=p->next;
       q=q->next;
       }
       p->next=NULL;
       delete q;
        return head;
    }
    
    struct node* deleteAtValue(struct node * head, int value ){
        struct node * p= head;
        struct node * q= head->next;
       while(q->data!=value && q->next!=NULL){
       p=p->next;
       q=q->next;
       }
       if(q->data== value){
       p->next=q->next;
       delete q;
       }
        return head;

    }

int main(){
    
    struct node*head=new struct node;                   
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
    cout<<"linked list before deletion:"<<endl;
    traversal(head);
    //head=deleteFirst(head);
    //head=deleteAtIndex(head,2);
     //head=deleteLast(head);
    head=deleteAtValue(head,22);
    cout<<"linked list after deletion:"<<endl;
    traversal(head);
    return 0;
}