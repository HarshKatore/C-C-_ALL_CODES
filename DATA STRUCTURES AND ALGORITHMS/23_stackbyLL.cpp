#include<bits/stdc++.h>
using namespace std;
    class node{
                 public:
                    char data;
                    node* next;

    node(char d){
                    data=d;
                    next=NULL;
                }
 
    ~node(){
                    if(next!=NULL){
                    delete next;
                    next=NULL;
    }
    }
 
    };
   class stacka{
     public:
             node* top;
     stacka(){
         top=NULL;
     }
                    void push(char d){
                    node* temp= new node(d);
                    temp-> next=top;
                    top=temp;
                    }

                    void pop(){
                    if(top==NULL){
                    cout<<" stack underflow"<<endl;
                     return;
                     }
                     else{  node* temp=top;
                    top=top->next;
                    temp-> next=NULL;
                    delete temp;
                    }
                    } 
                    };
                    //infix to postfix
                    int precidance(char k){
                    if(k=='^') return 3;
                    else if(k=='/'|| k=='*') return 2;
                    else if(k=='+'|| k=='-') return 1;
                    return 0;
                    }

                    string intopost(string s){
                      stacka stk;
                      string ans;
                      for(int i=0;i< s.length();i++){
                      char c = s[i];
                      if((c<='z' && c>= 'a') || (c<='Z' && c>= 'A')|| (c<='9' && c>= '1')){
                      ans.push_back(c);
                    }
                    else if(c=='('){
                    stk.push('(');
                
                    }
                    else if(c==')'){
                    while(stk.top->data != '(')  {
                    ans.push_back(stk.top->data);
                    stk.pop();
               }
                    stk.pop();
            }
           
                    else {
                    while (stk.top != NULL
                   && precidance(c) <= precidance(stk.top->data)) {
                   ans.push_back(stk.top->data);
           
                   stk.pop();
                    }
                    stk.push(c);
                

                    }
                    }
                    while(stk.top != NULL){
                     ans.push_back(stk.top-> data);
                     stk.pop();
                     }
                     return ans;
                     }

	            void reverseb(string &s){
	                for(int i=0;i<s.length();i++){ 
	                if(s[i]=='(') s[i]=')';
	                else if(s[i]==')') s[i]='(';
                }
                }
       
                //infix to prefix
                string intopre (string s){
                reverse(s.begin(),s.end());
	            reverseb(s);
                string news = intopost(s);
                reverse(news.begin(),news.end());
                return news;
                }

                //postfix Evalution
	            int posteval(string &str){
                string s=intopost(str);
	            stacka stk;  
	            for(int i=0;i<s.length();i++){
	            if( (s[i]<='9' && s[i]>= '1')){ stk.push(s[i]-'0');}
	            else{ 
	            int val1=stk.top->data;
	            stk.pop();
	            int val2=stk.top->data;
	            stk.pop();
	            switch(s[i]){
	            case '+': stk.push(val2+val1);
	            break;
	            case '-': stk.push(val2-val1);
	            break;
	            case '*': stk.push(val2*val1);
	            break;
	            case '/': stk.push(val2/val1);
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
        }
