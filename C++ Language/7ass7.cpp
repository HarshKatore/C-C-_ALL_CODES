//prims minimum cost to connect all nodes
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n, a,b,min1=INT_MAX,minval=0; int cost[10][10],visited[10]={0};
    cout<<"total nodes="<<endl; cin>>n;
    cout<<"enter the cost="<<endl;
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cin>>cost[i][j];
        if(cost[i][j]==0) cost[i][j]=INT_MAX;
    }
   } 
   visited[1]=1;
   for(int k=1;k<n;k++){
    min1=INT_MAX;
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        if(cost[i][j]<min1 && visited[i]!=0) {min1=cost[i][j]; a=i; b=j; }
    }
   } 
   if(visited[a]==0 || visited[b]==0){
    cout<<k<<")"<<"cost of ("<<a<<","<<b<<") ="<<cost[a][b]<<endl;
    minval+=min1;
    visited[b]=1;
   }
   cost[a][b]=cost[b][a]=INT_MAX;
   }
   cout<<"minimum cost of tree ="<<minval<<endl;
    return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,minvalue=0;
    int min1=INT_MAX,cost[10][10],visited[10]={0};
    int n;
    cout<<"enter total nodes:"<<endl;
    cin>>n;
    cout<<"enter the costs"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>cost[i][j];
            if(cost[i][j]==0) cost[i][j]=INT_MAX;
        }
    }
    visited[1]=1;
    for(int k=1;k<n;k++){
        min1=INT_MAX;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(cost[i][j]<min1 && visited[i]!=0) {min1=cost[i][j]; a=i ;b=j;}
            }
        }
             if(visited[a]==0 || visited[b]==0){
            cout<<"edge:("<<k<<")\tcost"<<"("<<a<<"->"<<b<<"):"<<min1<<endl;
             minvalue=minvalue+min1;
             visited[b]=1;
        }
            cost[a][b]=cost[b][a]=INT_MAX;
 }
        cout<<"MINIMUIM VALUE="<<minvalue<<endl;
    return 0;
}*/