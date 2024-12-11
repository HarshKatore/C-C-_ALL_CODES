#include<iostream>
using namespace std;
 struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *head){
    struct Node *ptr = head;
    do{
        cout<<"element:"<<ptr->data<<endl;
        ptr = ptr->next;
    }while(ptr!=head);
}

 struct Node* deleteFirst(struct Node * head){
        struct Node * p= head;
        struct Node * q= head;
        while(p->next!=head){
            p=p->next;
        }
        p->next=head->next;
        head=head->next;
        delete q ;
        return head;
    }


    struct Node* deleteAtIndex(struct Node * head , int index){
        struct Node * p= head;
        struct Node * q= head->next;
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
    struct Node* deleteLast(struct Node * head ){
        struct Node * p= head;
        struct Node * q= head->next;
       while(q->next!=head){
            p=p->next;
            q=q->next;
        }
       p->next=head;
       delete q;
        return head;
    }
    
    struct Node* deleteAtValue(struct Node * head, int value ){
        struct Node * p= head;
        struct Node * q= head->next;
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
    // Allocate memory for nodes in the linked list in Heap
    struct Node*head=new struct Node;                   
    struct Node*second=new struct Node;
    struct Node*third=new struct Node;
    struct Node*fourth=new struct Node;
 
    // Link first and second nodes
    head->data = 4;
    head->next = second;
 
    // Link second and third nodes
    second->data = 3;
    second->next = third;
 
    // Link third and fourth nodes
    third->data = 6;
    third->next = fourth;
 
    // Terminate the list at the third node
    fourth->data = 1;
    fourth->next = head;

    cout<<"Before deletion:"<<endl;
    linkedListTraversal(head);
   // head=deleteFirst(head);
    //head=deleteAtIndex(head,2);
    // head=deleteLast(head);
    head=deleteAtValue(head,6);
    cout<<"after deletion:"<<endl;
    linkedListTraversal(head);
    return 0;
}
