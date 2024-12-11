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
 
struct Node * insertAtFirst(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
 
    struct Node * p = head->next;
    while(p->next != head){
        p = p->next;
    } 
    // At this point p points to the last node of this circular linked list
 
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
 
}

struct Node * insertAtIndex(struct Node *head, int data, int index){
    struct Node * ptr = new struct Node;
    ptr->data = data;
    struct Node * p = head;
    int i = 0;

    while (i!=index-1)                                 //for bringing p to the adress of node before that index
    {
        p = p->next;           //index will stop at 2 position before index but p will contain address of index -1 node 
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// Case 3
struct Node * insertAtEnd(struct Node *head, int data){
    struct Node * ptr = new struct Node ;
    ptr->data = data;
    struct Node * p = head;            //while traversing original head cant be used ow address in pointer change

    while(p->next!=head){        //bring p to last node ie p-> next =head                            // we have taken next because we wand to stop traversal at last ,,in LL traversal we cross last element then stop
        p = p->next;
    }
    ptr->next = head;
    p->next = ptr;
    return head;                      //we always return head other are not imp to maintain thay are found from head............
}

// Case 4
struct Node * insertAfterNode(struct Node *head, struct Node *prevNode, int data){
    struct Node * ptr = new struct Node ;
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    
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

    cout<<"Before insertion:"<<endl;
    linkedListTraversal(head);
   // head= insertAtFirst(head, 65);
  //  head= insertAtFirst(head, 55);          //now 55 will be at first position

   //head = insertAtIndex(head, 56, 1);
     //head = insertAtEnd(head, 56);  
    head = insertAfterNode(head, third, 45);

    cout<<"after insertion:"<<endl;
    linkedListTraversal(head);
    return 0;
}
