#include<bits/stdc++.h>
using namespace std;
const int N= 1e5+5;
vector<int>adj[N];
 int visited [N];
 int level [N];
 int parent[N];
void bfs (int s){
    queue<int> q;
    q.push(s);
    visited[s]=true;
    level[s] =0;
    parent[s]=-1;
 while (! q.empty())
 {
    int u=q.front();
    q.pop();
    for(int v:adj[u]){
        if(visited[v])continue;
        q.push(v);
        visited[v]=true;
        level[v]=level[u]+1;
        parent[v]= u;
    }
 }
 
    
}
int main()
{
     int m,n;cin>>n>>m;
     for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
     }
     int s,d;cin>>s>>d;
     
     bfs(s);
     cout<<"distance : "<<level[d]<<endl;
     
     vector<int>path;
     int current=d;
     while (parent[current] != 0)
     {
        path.push_back(current);
        current = parent[current];
     }
     reverse(path.begin(),path.end());

     for(int v:path){
        cout<<v<<" ";
     }
     
     return 0;
}