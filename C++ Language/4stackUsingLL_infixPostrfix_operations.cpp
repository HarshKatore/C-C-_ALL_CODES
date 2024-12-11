#include<bits/stdc++.h>
using namespace std;
class node{
    public: char data; node* next; 
    node(char k){data=k; next=NULL;}
};
class stacka{
    public: node* top;
    stacka(){top=NULL;}
    void push(char k){node*temp=new node(k); temp->next=top; top=temp;}
    void pop(){
        if(top==NULL){cout<<"underflow"<<endl; return;}
        node* temp=top; top=top->next; temp->next=NULL; delete temp; 
    }
};
int presidence(char k){
    if(k=='^') return 3;
    else if(k=='/' || k=='*') return 2;
    else if(k=='-' || k=='+') return 1;
    return 0;
}
void revbr(string &s){
    for(int i=0;i<s.length();i++){
        if(s[i]=='(') s[i]=')';
        else if(s[i]==')') s[i]='(';
    }
}
string intopost(string s){
    string ans;
    stacka stk;
    for(int i=0;i<s.length();i++){
        char c=s[i];
        if((c<='z'&&c>='a')||(c<='Z'&&c>='A')||(c<='9'&&c>='1')){ans.push_back(c);}
        else if(c=='(') stk.push('(');
        else if(c==')') {
            while(stk.top->data!='(') {ans.push_back(stk.top->data); stk.pop();}
            stk.pop();
        }
        else{
            while(stk.top!=NULL && presidence(c)<=presidence(stk.top->data)){ans.push_back(stk.top->data);stk.pop();}
            stk.push(c);
        }
    }
    while(stk.top!=NULL){ans.push_back(stk.top->data); stk.pop();}
    return ans;
}
string intopre( string s){
    reverse(s.begin(),s.end());
    revbr(s);
    string str=intopost(s);
    reverse(str.begin(),str.end());
    return str;
}
int posteval(string str){
    string s=intopost(str);
    stacka stk;
    for(int i=0;i<s.length();i++){
        char c=s[i];
        if(c<='9'&&c>='1') stk.push(c-'0');
        else{
            int a=stk.top->data;
            stk.pop();
            int b=stk.top->data;
            stk.pop();
            switch(c){
                case '+':stk.push(b+a);
                break;
                case '-':stk.push(b-a);
                break;
                case '*':stk.push(b*a);
                break;
                case '/':stk.push(b/a);
                break;
            }
        }
    }
    return stk.top->data;
}
int main(){ string s;
    cout<<"enter string="<<endl; cin>>s;
    cout<<"postfix="<<intopost(s)<<endl;
    cout<<"prefix="<<intopre(s)<<endl;
    cout<<"evaluated ans="<<posteval(s)<<endl;
    return 0;
}
/*#include<bits/stdc++.h>
 using namespace std;
 class node{
    public: 
    char data;
    node* next;
    node(char c){
        data= c;
        next=NULL;
    }
   
};

class stacka{
public:
node* top;
stacka(){
    top=NULL;
}
void push(char k){
    node*temp=new node(k);
    temp->next=top;
    top=temp;
}
void pop(){
    if(top==NULL){
   cout<<"underflow"<<endl;
   return;
    }
    node* temp= top;
    top=top->next;
    temp->next=NULL;
    delete temp;
}
};

int precidence(char c){
    if(c=='^') return 3;
   else if(c=='/'|| c=='*') return 2;
   else if(c=='-'|| c=='+') return 1;
   return 0;
}
string intopost(string s){
    stacka stk;
    string ans;
    for(int i=0;i<s.length();i++){
        char c= s[i];
        if(c<='z' && c>='a' || c<='Z' && c>='A'|| c<='9' && c>='1'){
            ans.push_back(c);
        }
        else if(c=='(') stk.push('(');
        else if(c==')'){
            while(stk.top->data!='('){
                ans.push_back(stk.top->data);
                stk.pop();
            }
            stk.pop();
        }
    else{
        while(stk.top!=NULL && (precidence(c)<=precidence(stk.top->data))){
            ans.push_back(stk.top->data);
            stk.pop();
        }
        stk.push(c);
    }
    }
    while(stk.top!=NULL){
        ans.push_back(stk.top->data);
        stk.pop();
    }
    return ans;

}
 void revbrac(string &s){
    for(int i=0;i<s.length();i++){
        if(s[i]=='(') s[i]=')';
       else if(s[i]==')') s[i]='(';
    }
 }
string intopre(string s){
    reverse(s.begin(),s.end());
    revbrac(s);
    string str= intopost(s);
    reverse(str.begin(),str.end());
    return str;
}

int posteval(string str){
    stacka stk;
    string s= intopost(str);
    for(int i=0;i<s.length();i++){
        char c= s[i];
    if( c<='9' && c>='1') stk.push(c-'0');
    else{
        int a2=stk.top->data;
        stk.pop();
        int a1=stk.top->data;
        stk.pop();

    switch(c){
        case '+':stk.push(a1+a2);
        break;
        case '-':stk.push(a1-a2);
        break;
        case '*':stk.push(a1*a2);
        break;
        case '/':stk.push(a1/a2);
        break;
    }
    }
}
return stk.top->data; 
}
int main(){
     cout<<"Enter the Expression for the operations:"<<endl;
            string str;
            cin>>str;
           int ans= posteval(str);

            string ans1 = intopost(str);
            string ans2 = intopre(str);
            cout<<"Infix to postfix expression ="<<ans1<<endl;
            cout<<"Infix to prefix expression ="<<ans2<<endl;
	       
            cout<<"Evaluated Answer ="<<ans<<endl;
    return 0;
}*/

