#include<bits/stdc++.h>
using namespace std;
class node
{
            public:
            int data;
            node* left;
            node* right;
            node(int d){
                data=d;
                left=NULL;
                right=NULL;
            }

};
node* creation(node* root){
    cout<<"enter the data"<<endl;
    int d;
    cin>>d;
    root= new node(d);
    if(d==-1) return NULL;
    cout<<"for left"<<endl;
    root-> left = creation(root->left);
    cout<<"for right"<<endl;
    root-> right = creation(root->right);
    return root;
}

void LevelOrderTraversal(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
    node*temp=q.front();
    q.pop();
    if(temp==NULL){
        cout<<endl;
        if(!q.empty()) q.push(NULL);
    }
    else{
        cout<<temp->data<<" ";
        if(temp->left)
        q.push(temp->left);
        if(temp->right)
        q.push(temp->right);
    }

    }
}
    void inorder(node* root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
    void preorder(node* root){
        if(root==NULL){
            return;
        }
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
    void postorder(node* root){
        if(root==NULL){
            return;
        }
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
    void insertionByLevel(node* &root){
        queue<node*> q;
        cout<<"enter the data"<<endl;
        int data;
        cin>>data;
        root=new node(data);
        q.push(root);
        while(!q.empty()){
            node* temp=q.front();
            q.pop();
        cout<<"enter the left data for"<<temp->data<<endl;
        int l;
        cin>>l;
        if(l!=-1){
        temp->left =new node(l);
        q.push(temp->left);
        }
        cout<<"enter the right data for"<<temp->data<<endl;
        int r;
        cin>>r;
        if(r!=-1){
         temp->right=new node(r);
        q.push(temp->right);
        }
        }
    }
int main(){
    node* root=NULL;
    root= creation(root);
    LevelOrderTraversal(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    
    return 0;
}