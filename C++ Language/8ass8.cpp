//exp tree
#include<bits/stdc++.h>
using namespace std;
class tree{
    public:char data; tree*left; tree*right;
    tree(char c){data=c; left=NULL; right=NULL;}
};
int top=-1;
tree* stk[20];
void push(tree*node){top++; stk[top]=node;}
tree* pop(){return stk[top--];}
void inorder(tree* root){
    if(root==NULL) return;
    inorder(root->left); cout<<root->data<<" "; inorder(root->right);
}
    void operand(char k){ cout<<"operand="<<k<<endl; tree* temp=new tree(k); push(temp);}
    void operators(char k){ cout<<"operator="<<k<<endl; tree* temp=new tree(k); temp->right=pop(); temp->left=pop(); push(temp);}
    
int main(){
    string s; cout<<"enter postfix="<<endl; cin>>s;
    for(int i=0;i<s.length();i++){
    if((s[i]>='a' && s[i]<='z' )|| (s[i]>='A' && s[i]<='Z' )||(s[i]>='1' && s[i]<='9' ) ){operand(s[i]);}
    else{operators(s[i]);}
    }
    cout<<"Inorder= ";
    inorder(stk[top]);
    cout<<endl;
    return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
class tree{
public: char data;
        tree* left;
        tree* right;
        tree(char a){
            data=a;
            left=NULL;
            right=NULL;
        }
};
int top=-1;
tree* stk[20];
void push(tree*node){
    top++;
    stk[top]=node;
}
tree* pop(){
   return stk[top--];
}
void inorder(tree * root){
if(root==NULL) return;
inorder(root->left);
cout<<" "<<root->data;
inorder(root->right);
}
void operand(char a){
    cout<<"operand="<<a<<endl;
tree * node= new tree(a);
push(node);
}
void operators(char a){
    cout<<"operator="<<a<<endl;
tree * node= new tree(a);
node->right=pop();
node->left=pop();
push(node);
}
int main(){
    string s;
    cout<<"enter postfix="<<endl;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if((s[i]<='z' && s[i]>='a') || (s[i]<='Z' && s[i]>='A')) operand(s[i]);
        else operators(s[i]);

    }
    cout<<"inorder=";
    inorder(stk[top]);
    cout<<endl;
    return 0;
}*/
