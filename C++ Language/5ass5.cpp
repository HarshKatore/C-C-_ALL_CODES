#include<bits/stdc++.h>
using namespace std;
class qu{
public: int maxi; int * que; int front; int rear;
qu(int s){maxi=s; front=rear=-1;que=new int [s];}


void enqueue(int a){
    if(front ==-1 && rear==-1) {front=rear=0; que[rear]=a;}
    else if(front==(rear+1)%maxi) {cout<<"overflow!!"<<endl;}
    else {rear=(rear+1)%maxi; que[rear]=a;}
}
void dequeue(){
    if(front ==-1 && rear==-1) {cout<<"underflow!!"<<endl;}
    else  if(front ==rear && rear!=-1) {front=rear=-1;}
    else{front=(front+1)%maxi;}
}
void display(){
    if(front==-1) {cout<<"empty!!"<<endl; return;}
    int i=front;
    for(i=front;i!= rear; i=(i+1)%maxi){
        cout<<" "<<que[i];
    }
    cout<<" "<<que[i]<<endl;
}
};
int main(){
    qu x(3);
    int o,a;
    while(1){
cout<<"enter the choice:1)enqueue 2) dequeue 3) display"<<endl;
cin>>o;
if(o==0 || o>3) break;
switch(o){
case 1: cout<<"enter the data="<<endl; cin>>a;
x.enqueue(a);
break;
case 2:x.dequeue();
break;
case 3:x.display();
break;
}
    }
    
    return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
#define maxi 4
int que[maxi];
int front=-1;
int rear=-1;
void enqueue(int a){
     if(front==-1 && rear==-1) {front=rear=0; que[rear]=a;}
     else if((rear+1)%maxi==front){ cout<<"full"<<endl; return;}
     else { rear=(rear+1)%maxi; que[rear]=a;}
}
void dequeue(){
     if(front==rear && front !=-1 ) { cout<<"Dequeue element is"<<que[front]<<endl; front=rear=-1; }
     else if(front==-1){ cout<<"empty"<<endl; return;}
     else {  cout<<"Dequeue element is"<<que[front]<<endl; front=(front+1)%maxi; }
}
void display(){
int i=front;
for(i=front;i!=rear;i=(i+1)%maxi){
    cout<<que[i]<<" ";
}
 cout<<que[i]<<endl;
}
int main(){
    int o;
    while(1){
        cout<<"enter choice: 1.enqueue 2.dequeue 3. display"<<endl;
        cin>>o;
        if (o==0 || o > 3) break;
        switch(o){
            case 1:
            cout<<"enter value="<<endl;
            int a;
            cin>>a;
            enqueue(a);
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
        }
    }
    return 0;
}
*/