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
    void print(node* head)
    {
        while(head!=NULL)
        {
                cout<<head-> data<<"->";
                head=head->next;
        }
    }
    void insertatbegin(node* &head, node* &tail,int d)
    {
    if(head== NULL)
{
    node* temp=new node(d);
    head=temp;
    tail=temp;
    return;
}
    node* temp=new node(d);
    temp-> next= head;
    head= temp;   
    }
    void insertatend(node* &head, node* &tail,int d)
    {
    if(head== NULL)
{
    node* temp=new node(d);
    head=temp;
    tail=temp;
    return;
}
    node* temp=new node(d);
    tail->next= temp;
    tail=temp;   
    }

    void insertatposition(node* &head, node* & tail, int d, int position)
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
    }

    void deletenode(node* &head, node* &tail, int position)
    {
        if(position==1)
        {
                node* temp= head;
                head=head-> next;
                temp-> next=NULL;
                delete temp;
                return;
        }
                int c=1;
                 node* curr= head;
                 node* prev=NULL;
                while(c<position)
        {
                prev = curr;
                curr=curr-> next;

                c++;
        }
        if(curr-> next==NULL){ tail=prev;}
        prev-> next= curr-> next;
        curr-> next=NULL;
        delete curr;
        

    }
int main(){
    node* head=NULL;
    node* tail= NULL;
    insertatbegin(head,tail,10);
    insertatbegin(head,tail,22);

    insertatend(head,tail,222);

    insertatposition(head,tail,55,1);
    insertatposition(head,tail,55,3);

    insertatposition(head,tail,55,6);
    deletenode(head,tail,2);
    deletenode(head,tail,1);
    deletenode(head,tail,4);
    print(head);  
    return 0;
}