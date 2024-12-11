/* Inserting at the beginning         -> Time complexity:  O(1)
   Inserting at index                 -> Time complexity:  O(n)
   Inserting at the end               -> Time complexity:  O(n)
   Inserting after a given Node       -> Time complexity:  O(1)
*/
#include<iostream>
using namespace std;
//only maintaining head is imp
struct Node{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout<<"Element:"<< ptr->data<< endl;
        ptr = ptr->next;
    }
}

// Case 1
struct Node * insertAtFirst(struct Node *head, int data){
    struct Node * ptr = new struct Node;
    ptr->data = data;

    ptr->next = head;
    return ptr; 
}

// Case 2
struct Node * insertAtIndex(struct Node *head, int data, int index){
    struct Node * ptr = new struct Node;
    ptr->data = data;
    struct Node * p = head;
    int i = 0;

    while (i!=index-1)                                 //for bringing p to the adress of node before that index
    {
        p = p->next;
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

    while(p->next!=NULL){        //bring p to last node ie p-> next =null                            // we have taken next because we wand to stop traversal at last ,,in LL traversal we cross last element then stop
        p = p->next;
    }
    ptr->next = NULL;
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
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = new struct Node;
    second =  new struct Node;
    third =  new struct Node;
    fourth =  new struct Node;

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;

    cout<<"Linked list before insertion:"<<endl;
    linkedListTraversal(head);
     head = insertAtFirst(head, 56);               //    use one by one
    //head = insertAtIndex(head, 56, 1);
    // head = insertAtEnd(head, 56);  
   // head = insertAfterNode(head, third, 45);
    cout<<"Linked list after insertion:"<<endl;
    linkedListTraversal(head);

    
    return 0;
}