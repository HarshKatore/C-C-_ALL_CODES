#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;

    node(int d)
    {
        data=d;
        next=NULL;
    }
    ~node()
    {
        if(next!=NULL)
        {
            delete next;
            next=NULL;
        }
    }
    };


    void print(node* tail)
    {   node * temp= tail;
    do
    {
         cout<<tail-> data<<"->";
                tail=tail->next;
    }
        while(temp!=tail);
       
    }
  
    void insertatend( node* &tail,int d,int after){
   node* newn= new node(d);
    node* temp=tail;
    while(temp->data!= after)
     { 
        temp=temp->next;
     }
     newn->next=temp-> next;
      temp-> next= newn;
    //  if(tail->data==after){ tail=newn;}
      
     
    }

    /*void insertatposition(node* &head, node* & tail, int d, int position)
    {
        if(position==1)
        {
                insertatbegin(head,tail,d);
                return;
        }
        node* temp=head;
        int c=1;
        while(c<position-1)
        {
                temp=temp-> next;
                c++;
        }
        node* nti=new node(d);
        
        if(temp-> next==NULL) tail=nti;
        nti -> next =temp-> next;
        temp-> next = nti;
    }*/

    void deletenode(node* &tail, int value)
    {
        
        node* prev= tail;
        node* curr= tail->next;
        while(curr->data!=value)
        {
            prev=curr;
            curr=curr->next;
        } 
        if(tail->data==value) tail= prev;
        prev-> next= curr-> next;
        curr-> next=NULL;
        delete curr; 

    }
int main(){
    node* node1= new node(111);
    node* tail= node1;
    

 
    insertatend(tail,4,111);
    insertatend(tail,55,4);
    insertatend(tail,566,55);
    insertatend(tail,9,55);
    insertatend(tail,7,55);

   

  
    deletenode(tail,55);
    deletenode(tail,566);
    deletenode(tail,7);
    deletenode(tail,111);
  /* 
    */
    print(tail);  
    
    return 0;
}