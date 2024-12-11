#include<bits/stdc++.h>
using namespace std;
class node{
    public: int s; long long p; string n; node* next; node* pre;
    node(int sal,long long ph, string na){ s= sal;p=ph; n=na; next=NULL; pre=NULL;}
};
void insert_f(node *&head,node* &tail, int s, long long p,string n){
    if(head==NULL){ node*temp=new node(s,p,n); head=temp;tail=temp; return;}
     node*temp=new node(s,p,n); temp->next=head;head->pre=temp; head=temp;
}
void insert_e(node *&head,node* tail, int s, long long p,string n){
    if(tail==NULL){ node*temp=new node(s,p,n); head=temp;tail=temp; return;}
     node*temp=new node(s,p,n); tail->next=temp; temp->pre=tail; tail=temp;
}
void insert_p(node *&head,node *&tail, int s,  long long p,string n,int pos){
     if(pos==1) {insert_f(head,tail,s,p,n); return;}
    node* current=head;
    int c=1;
    while(c<pos-1){current=current->next; c++;}
    if(current->next==NULL){node* nti=new node(s,p,n);   current->next=nti; nti->pre=current; tail=nti; return;}
    node* nti=new node(s,p,n); nti->next=current->next; nti->next->pre=nti; current->next=nti; nti->pre=current;
}
void print(node* head){
    if(head==NULL) return;
    cout<<"( "<<head->s<<","<<head->p<<","<<head->n<<" )"<<" -> ";
    print(head->next);
}
void print_rev(node*head){
     if(head==NULL) return;
    print_rev(head->next);
    cout<<"( "<<head->s<<","<<head->p<<","<<head->n<<" )"<<" -> ";
}
    void delete_n(node* &head,node *&tail,int pos){
    if(pos==1) {node * temp=head; head=head->next; temp->next=NULL; head->pre=NULL; delete temp; return;}
    node* curr=head;
    node* prev=NULL;
    int c=1;
    while(c<pos){prev=curr; curr=curr->next; c++;}
    if(curr->next==NULL){ prev->next=NULL; curr->pre=NULL; delete curr; tail= prev; return;}
    prev->next=curr->next; curr->next->pre=prev; curr->next=NULL; curr->pre=NULL; delete curr; 
    }
    void modify(node *&head,node *&tail, int s,  long long p,string n,int pos){
         if(pos==1) {head->s=s; head->p=p; head->n=n; return;}
    node* current=head;
    int c=1;
    while(c<pos){current=current->next;}
    current->s=s; current->p=p; current->n=n;
    }
int main(){
   int pos; int o; int s; long long p; string n; node * head=NULL; node * tail=NULL;
    while(1){
         cout<<"enter the choice:1)insert front 2)insert position 3)insert end 4)delete position 5)print 6)print reverse 7)Modify ="<<endl;
    cin>>o;
    if(o==0 || o>7) break;
    switch(o){
        case 1:cout<<"enter salary,phone numbeer &name="<<endl; cin>>s>>p>>n;
        insert_f(head,tail,s,p,n);
        break;
        case 2:cout<<"enter position,salary,phone numbeer &name="<<endl; cin>>pos>>s>>p>>n;
        insert_p(head,tail,s,p,n, pos);
        break;
        case 3:cout<<"enter salary,phone numbeer &name="<<endl; cin>>s>>p>>n;
        insert_e(head,tail,s,p,n);
        break;
        case 4:cout<<"enter position ="<<endl; cin>>pos;
        delete_n(head,tail,pos);
        break;
        case 5:print(head); cout<<endl; 
        break;
        case 6:print_rev(head); cout<<endl;
        break;
        case 7:cout<<"enter position,salary,phone numbeer &name="<<endl; cin>>pos>>s>>p>>n;
        modify(head,tail,s,p,n, pos);
        break;
    }
    }
    return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
class node
{   public:
    string id;
    int salary;
    long long ph_no;
    node* next;
    node* pre;

    node(string i,int d,long long p)
    {   id=i;
        salary=d;
        ph_no=p;
        next=NULL;
        pre=NULL;
    }
    ~node()
    {   if(next!=NULL)
        {   delete next;
            next=NULL;
        }
    }
    };
    void print(node* head)
    {           while(head!=NULL)
        {
                cout<<head-> id<<" "<<head->salary<<" "<<head->ph_no <<"->";
                head=head->next;
        }
    }
    void insertatbegin(node* &head, node* &tail,int d,string id,long long p)
    {
    if(head== NULL)
{
    node* temp=new node(id,d,p);
    head=temp;
    tail=temp;
    return;
}
    node* temp=new node(id,d,p);
    temp-> next= head;
    head->pre=temp;
    head= temp;   
    }
    void insertatend(node* &head, node* &tail,int d,string id,long long p)
    {
    if(head== NULL)
{
    node* temp=new node(id,d,p);
    head=temp;
    tail=temp;
    return;
}
    node* temp=new node(id,d,p);
    tail->next= temp;
    temp-> pre= tail;
    tail=temp;   
    }

    void insertatposition(node* &head, node* & tail, int d, int position,string id,long long p)
    {
        if(position==1)
        {
                insertatbegin(head,tail,d,id,p);
                return;
        }
        node* temp=head;
        int c=1;
        while(c<position-1)
        {
                temp=temp-> next;
                c++;
        }
        node* nti=new node(id,d,p);
        
        if(temp-> next==NULL)
        { tail=nti;
          temp-> next= nti;
          nti->pre=temp;
         // nti-> next=NULL;
          return;
        }
        nti -> next =temp-> next;
        nti -> next->pre= nti;
        temp-> next = nti;
        temp-> next -> pre = temp; 
    }

    void modify(node* &head, node* & tail, int d, int position,string id,long long p)
    {
        if(position==1)
        {       head->id=id;
               head->ph_no=p;
               head->salary=d;
                return;
        }
        node* temp=head;
        int c=1;
        while(c<position-1)
        {
                temp=temp-> next;
                c++;
        }
       temp->next->id=id;
       temp->next->salary=d;
       temp->next->ph_no=p;
    }

    void deletenode(node* &head, node* &tail, int position)
    {
        if(position==1)
        {
                node* temp= head;
                head=head-> next;
                temp-> next=NULL;
                head -> pre=NULL;
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
        if(curr-> next==NULL)
        {       prev->next =NULL;
                curr->pre=NULL;
                tail=prev;
                delete curr;
                return;
        }
        curr->next -> pre= prev;
        prev-> next= curr-> next;
        curr-> next=NULL;
        curr-> pre=NULL;
        delete curr;
        

    }
    //print reverse
void printrev(node * &head){
node*temp=head;
if(temp==NULL){
return;
}
printrev(temp->next);
cout<<head-> id<<" "<<head->salary<<" "<<head->ph_no <<"->";
}
int main(){
    node* head=NULL;
    node* tail= NULL;
    int a=1,po=0 ,v=0;
    string s;
    long long p;
    while(a){
        cout<<"\nENTER YOUR CHOICE:\n1:INSERT RECORD AT FRONT\n2:INSERT RECORD AT BACK\n3:INSERT RECORD AT POSITION\n"
       <<" 4:DELETE RECORD BY POSITION\n5:MODIFY VALUE OF POSITION IN RECORD\n6:DISPLAY FORWARD\n7:DISPLAY BACKWARD\n8:exit"<<endl;
       cin>>a;
       if(a==8) break;
       switch(a){
        case 1:
         cout<<"enter id :"<<endl;
        cin>>s;
         cout<<"enter salary :"<<endl;
        cin>>v;
        cout<<"enter phone number :"<<endl;
        cin>>p;
        insertatbegin(head,tail,v,s,p);
        break;
        case 2:
         cout<<"enter id :"<<endl;
        cin>>s;
         cout<<"enter salary :"<<endl;
        cin>>v;
        cout<<"enter phone number :"<<endl;
        cin>>p;
        insertatend(head,tail,v,s,p);
        break;
        case 3:
        cout<<"enter position :"<<endl;
        cin>>po;
        cout<<"enter id :"<<endl;
        cin>>s;
         cout<<"enter salary :"<<endl;
        cin>>v;
        cout<<"enter phone number :"<<endl;
        cin>>p;
        insertatposition(head,tail,v,po,s,p);
        break;
        case 4:
        cout<<"enter position :"<<endl;
        cin>>po;
        deletenode(head,tail,po);
        break;
        case 5:
        cout<<"enter position :"<<endl;
        cin>>po;
        cout<<"enter id :"<<endl;
        cin>>s;
         cout<<"enter salary :"<<endl;
        cin>>v;
        cout<<"enter phone number :"<<endl;
        cin>>p;
        modify(head,tail,v,po,s,p);
        break;
        case 6:
        print(head);
        break;
        case 7:
        printrev(head);
        break;
        default:
        cout<<"error"<<endl;
        break;
       }
    }
   
    return 0;
}*/