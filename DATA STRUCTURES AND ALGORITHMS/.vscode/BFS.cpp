#include<bits/stdc++.h>
using namespace std;
    void prep_adj_list(unordered_map<int,set<int>>&adjlist,vector<pair<int,int>> &edges){
        for(int i=0;i<edges.size();i++){
            int u=edges[i].first;
            int v=edges[i].second;
            adjlist[u].insert(v);
            adjlist[v].insert(u);
        }
    }
     void BFS(unordered_map<int,set<int>>&adjlist,unordered_map<int,bool>&visited,vector<int>&ans,int node){
        queue<int>q;
        q.push(node);
        visited[node]=1;

        while(q.empty()!=1){
            int frontn=q.front();
            q.pop();
            ans.push_back(frontn);

            for(auto i: adjlist[frontn]){
                if(visited[i]!=1){
                    q.push(i);
                    visited[i]=1;
                }
            }
        }

     }
int main(){
    vector<pair<int,int>> edges;
    edges.push_back({0,1});
    edges.push_back({0,3});
    edges.push_back({1,3});
    edges.push_back({0,2});
    int v=4;
    vector<int>ans;
    unordered_map<int,set<int>>adjlist;
    unordered_map<int,bool>visited;
    prep_adj_list(adjlist,edges);

    for(int i=0;i<v;i++){
        if(visited[i]!=1) BFS(adjlist,visited,ans,i);
    }
    cout<<"ans= "<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}