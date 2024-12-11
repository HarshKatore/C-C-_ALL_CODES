#include<bits/stdc++.h>
using namespace std;
class tree{
    public:int data; tree * left; tree * right;
    tree(int d){data=d; left=NULL; right=NULL;}
};
void inorder(tree* root){if(root==NULL)return;
 inorder(root->left); cout<<root->data<<" "; inorder(root->right);}
tree* minvalnode(tree*root){
    tree*temp=root; 
while(temp!=NULL && temp->right!=NULL) temp=temp->right;
return temp;
}
void mirror(tree*&root){
    if(root==NULL) return;
    tree*temp=root->left; root->left=root->right; root->right=temp;
    mirror(root->left); 
    mirror(root->right);
}
bool search(tree*root,int val){
    if(root==NULL) return 0;
    if(root->data==val) return 1;
    else if(val>root->data) return search(root->right,val);
    else return search(root->left,val);
}
void insert(tree*&root,tree*s){
    if(root->data<s->data){
        if(root->right==NULL) root->right=s;
        else insert(root->right,s);
    }
    else{
        if(root->left==NULL) root->left=s;
        else insert(root->left,s);
    }
}
tree *delete_n(tree*&root,int val){
    tree* temp;
if(root==NULL) return NULL;
if(root->data<val){root->right=delete_n(root->right,val);}
else if(root->data>val){root->left=delete_n(root->left,val);}
else{
    if(root->left==NULL && root->right==NULL) return NULL;
    else if(root->left==NULL){temp=root->right; delete root; return temp;}
    else if(root->right==NULL){temp=root->left; delete root; return temp;}
    temp=minvalnode(root->right);
    root->data=temp->data;
    root->right=delete_n(root->right,temp->data);
}
}
int main(){
    int o,val; tree *root=NULL; tree* s=NULL;
    while(1){
        cout<<"enter the choice:1)insert 2)delete 3)mirror 4)search 5)inorder ="<<endl; cin>>o;
        if(o==0 || o>5) break;
        switch(o){
            case 1:cout<<"enter value ="<<endl; cin>>val; s=new tree(val);
            if(root==NULL) {root=s; continue;;}
            insert(root,s);
            break;
            case 2:cout<<"enter value ="<<endl; cin>>val;
            delete_n(root,val);
            break;
            case 3:mirror(root);
            break;
            case 4:cout<<"enter value ="<<endl; cin>>val;
            if(search(root,val)) cout<<"found"<<endl; 
            else cout<<"not found"<<endl;
            break;
            case 5:inorder(root); cout<<endl;
            break;
        }
    }
    return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
class tree{
    public:
    int data;
    tree* left;
    tree* right;
    tree(int d){
        data=d;
        left=NULL;
        right=NULL;
        }
    };
    void inorder(tree* root){
        if(root==NULL) {  return;}
        inorder(root->left);
        cout<<" "<<root->data;
        inorder(root->right);
    }
    void mirror(tree* &root){
        if(root==NULL) return;
        tree*temp=root->left;
        root->left=root->right;
        root->right=temp;
        mirror(root->left);
        mirror(root->right);
    }
    tree* minval(tree* root){
        tree* temp=root;
        while(temp!=NULL && temp->right != NULL) temp=temp->right;
        return temp;
    }
    bool search(tree* root,int k){
        if(root==NULL) return 0;
        if(root->data==k) return 1;
        else if(root->data<k) search(root->right,k);
        else  search(root->left,k);
    }
    tree* deleten(tree* root,int k){
        tree* temp;
        if(root==NULL) return root;
        if(k<root->data) root->left=deleten(root->left,k);
        else if(k>root->data) root->right=deleten(root->right,k);
        else{
            if(root->right==NULL && root->left==NULL){return NULL;}
            else if(root->right==NULL ){temp=root->left; delete root; return temp;}
            else if(root->left==NULL  ){temp=root->right; delete root; return temp;}
            temp=minval(root->right);
            root->data=temp->data;
            root->right=deleten(root->right,temp->data);
        }
    }
    void insert(tree* root,tree*k){
    if(root==NULL) {root=k; return; }
        if(root->data<k->data){
            if(root->right==NULL){root->right=k; }
            else{ insert(root->right,k);}
        }
        if(root->data>=k->data){
            if(root->left==NULL){root->left=k; }
            else{ insert(root->left,k);}
        }
    }
int main(){
    tree* root=NULL;
    tree* s;
    int o,k;
    while(1){
        cout<<"Enter the choice:1)insert2)search3)mirror4)delete5)inorder="<<endl;
        cin>>o;
        if(o<0 || o>5) break;
        switch(o){
            case 1:cout<<"enter value="<<endl; cin>>k; s=new tree(k);
             insert(root,s);
            break;
            case 2:cout<<"enter value="<<endl; cin>>k;
            if(search(root,k))cout<<"found"<<endl;
            else cout<<"not found"<<endl;
                       break;
            case 3:mirror(root);
            break;
            case 4:cout<<"enter value="<<endl; cin>>k; 
            root=deleten(root,k);
            break;
            case 5:inorder(root); cout<<endl;
            break;
        }
    }
        return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;

class node{
public:
int data;
node*left;
node*right;
};

class Tree{
public:
int flag;
Tree()
{
flag=0;
}
void insert(node*,node*);
void inorder(node*T);
void search(node*,int);
void mirror(node*);
node* deleteNode(node*,int);
node*minValueNode(node*n);
};
///////////
void Tree::insert(node*root,node*s)
{
if(s->data > root->data)
{
 if(root->right==NULL)
 {
 root->right=s;
 }
 else 
 {
 insert(root->right,s);
 }
} 
if(s->data <= root->data)
{
 if(root->left==NULL)
 {
 root->left=s; 
 }
 else {insert(root->left,s);}
}
}
///////////////
void Tree::inorder(node*T)
{
if(T)
{ inorder(T->left);
 cout<<" "<<T->data;
 inorder(T->right);
} 
}
///////
void Tree ::search(node*root,int key)
{
if(root)
{
if(key==root->data)
flag=1;
else if(key<root->data)
search(root->left,key);
else 
search(root->right,key);
}
}
///////////////
void Tree::mirror(node*root)
{
node*temp;
if(root)
{
temp=root->left;
root->left=root->right;
root->right=temp;
mirror(root->left);
mirror(root->right);
}
}
//////////////
node* Tree::deleteNode(node*root,int key)
{
node*temp;
if(root==NULL)
return root;
if(key<root->data)
root->left=deleteNode(root->left,key);
else if(key>root->data)
root->right=deleteNode(root->right,key);
else{
if(root->left==NULL and root->right==NULL)
return NULL;
else if (root->left==NULL)
{
temp=root->right;
delete root;
return temp;
}
else if (root->right==NULL)
{
temp=root->left;
delete root;
return temp;
}
temp=minValueNode(root->right);
root->data=temp->data;
root->right=deleteNode(root->right,temp->data);
}
return root;
}
/////////////
node*Tree::minValueNode(node*n)
{
node*current=n;
while(current && current->left!=NULL)
current=current->left;
return current;
}
/////
int main()
{
int ch;
node*root=new node,*s;
root=NULL;
Tree t;
while(1)
{
cout<<endl<<"1.insert 2.display 3.search 4.mirror 5.delete"<<endl;
cout<<"enter your choice";
cin>>ch;
switch(ch)
{
case 1: s=new node;
 s->left=NULL;
 s->right=NULL;
 cout<<"enter data"<<endl;
 cin>>s->data;
 if(root==NULL)
 root=s;
 else {t.insert(root,s);}
 break;
case 2:t.inorder(root);
 break;
case 3: int key;
 cout<<"enter the search";
 cin>>key;
 t.search(root,key);
 if(t.flag==1)
 cout<<endl<<"key is found successfully";
 else
 cout<<"key not found";
 t.flag=0;
 break;
case 4: t.mirror(root);
 break;
case 5:int val;
 cout<<"enter data to delete";
 cin>>val;
 root=t.deleteNode(root,val);
 cout<<"inorder traversal of modified tree";
 t.inorder(root);
 break; 
}
}
return 0;
}
*/