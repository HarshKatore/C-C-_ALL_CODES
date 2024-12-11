#include<bits/stdc++.h>
using namespace std;
class node{
    public: int prn; string s; node* next;
    node(int p, string n){ prn= p; s=n; next=NULL;}
};
int pf=0,sf=0;
void insert_p(node *&head, int prn, string s){
    node*temp=new node(prn,s); temp->next=head; head=temp;
}
void insert_s(node *&head, int prn, string s){
    if(head==NULL) {insert_p(head,prn,s); return;}
    node* current=head;
    while(current->next!=NULL){current=current->next;}
    node* temp=new node(prn,s);
    current->next=temp;
}
void insert_m(node *&head, int prn, string s){
     if(head==NULL) {insert_p(head,prn,s); return;}
     if(sf==0){insert_s(head,prn,s); return;}
    node* current=head;
    while(current->next->next!=NULL){current=current->next;}
    node* temp=new node(prn,s);
    temp->next=current->next;
    current->next=temp;
}
void delete_n(node * &head,int p){
    if(head->prn==p){node* temp=head; head=head->next; temp->next=NULL; delete temp; pf=0; return;}
    node* curr=head; node* prev=NULL;
    while(curr->prn!=p){prev=curr; curr=curr->next;}
    if(curr->next==NULL) sf=1;
    prev->next=curr->next; curr->next=NULL; delete curr;
}
void print(node* head){
    if(head==NULL) return;
    cout<<"("<<head->prn<<","<<head->s<<")"<<" -> ";
    print(head->next);
}
void print_rev(node*head){
     if(head==NULL) return;
    print_rev(head->next);
    cout<<"("<<head->prn<<","<<head->s<<")"<<" -> ";
}
int main(){
    node* head=NULL;
int o;
int prn;
string s;
while(1){
    cout<<"enter the choice:1)insert president 2)insert member 3)insert secratory 4)delete 5)print 6)print reverse="<<endl;
    cin>>o;
    if(o==0 || o>6) break;
    switch(o){
        case 1:if(pf==1) {cout<<"president exists!!"<<endl; continue;}
        cout<<"enter prn &name="<<endl; cin>>prn>>s;
        insert_p(head,prn,s); pf=1;
        break;
        case 2:cout<<"enter prn &name="<<endl; cin>>prn>>s;
        insert_m(head,prn,s);
        break;
        case 3:if(sf==1) {cout<<"secratory exists!!"<<endl; continue;}
        cout<<"enter prn &name="<<endl; cin>>prn>>s;
        insert_s(head,prn,s); sf=1;
        break;
        case 4:cout<<"enter prn ="<<endl; cin>>prn;
        delete_n(head,prn);
        break;
        case 5:print(head); cout<<endl; 
        break;
        case 6:print_rev(head); cout<<endl;
        break;
    }
}
    return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
int pf=0,sf=0;
class node{
public:
int prn;
string name;
node* next;
node(int d ,string n){
prn=d;
name=n;
next=NULL;
}
~node(){
if(this->next!=NULL){
delete next;
this->next=NULL;}
}
};
//INSERT president
void InsertAtFront(node* &head, int d,string s){
node* temp=new node (d,s);
temp->next=head;
head=temp;
}
// delete the node
void deleteNode(node* &head,int prn){
if(head->prn==prn){
node* temp= head;
head=head->next;
temp->next=NULL;
delete temp;
pf=0;
return;
}
node* curr=head;
node * prev= NULL;
while(curr->prn!=prn){
prev=curr;
curr=curr->next;
}
if(curr->next==NULL) sf=0;
prev->next=curr->next;
curr->next=NULL;
delete curr;
}
//INSERTING secretry
void insertAtBack(node* &head,int d,string s){
if(head==NULL){
InsertAtFront(head,d,s);
return;
};
node* temp=new node(d,s);
node* current=head;
while(current->next!=NULL){
current=current->next;
}
current->next=temp;
}
//INSERT member
void InsertAtPosition(node* &head, int d,int pos,string s){
if(head==NULL){
InsertAtFront(head,d,s);
return;
}
if(sf==0){
    insertAtBack(head,d,s);
    return;
}
node* temp=new node(d,s);
node* current=head;
while(current->next->next!=NULL){
current=current->next;
}
  temp->next=current->next;
current->next=temp;
}

//PRINTING LINKED LIST by traversal
void print(node * &head){
node*temp=head;
while(temp!=NULL){
cout<<temp->prn<<"->"<< temp->name<<"  ";
temp=temp->next;
}cout<<endl;
}
//print reverse
void printrev(node * &head){
node*temp=head;
if(temp==NULL){
return;
}
printrev(temp->next);
cout<<temp->prn<<"->"<< temp->name<<"  ";
}
int main(){
node*head=NULL;

int o=1;
int a;
string b;
while(o){
printf("\nenter your choice->\n1:add president\n2:add member\n3: add secretery\n4:delete particular PRN\n5: display in reverse order\n6: print\n7:end\n");
 scanf("%d",&o);
if(o==7){break;};
switch(o){
case 1:
if(pf==0){
cout<<"enter prn:"<<endl;
cin>>a;
cout<<"enter name:"<<endl;
cin>>b;
InsertAtFront(head,a,b);
pf=1;}
else{cout<<"president inserted"<<endl;}
break;
case 2:

cout<<"enter prn:"<<endl;
cin>>a;
cout<<"enter name:"<<endl;
cin>>b;
InsertAtPosition(head,a,2,b);
break;
case 3:
if(sf==0){
cout<<"enter prn:"<<endl;
cin>>a;
cout<<"enter name:"<<endl;
cin>>b;
insertAtBack(head,a,b);
sf=1;}
else{cout<<"secratory already inserted"<<endl;}
break;
case 4:
int p;

cout<<"enter PRN:"<<endl;
cin>>p;

deleteNode(head,p);
break;
case 5:
printrev(head);
break;
case 6:
print(head);
break;
default:
printf("error!\n");
break;
}}
return 0;
}*/