#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int> adj[N];
int visited[N];
int parent[N];
int level[N];
void bfs(int s){
    queue<int>q;
    q.push(s);
    visited[s] =true;
    parent[s]= -1;
    while (!q.empty())
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
     int m,n;cin>>m>>n;
     for(int i=0;i<m;i++){
       int u,v;cin>>u>>v;
       adj[u].push_back(v);
       adj[v].push_back(u);
     }
     bfs(1);
     cout<<level[7]<<endl;
     int dest=7;
     while (dest !=-1)
     {  int parrt=parent[dest];
         dest=parrt;
        cout<<parrt<<" ";

     }
     
     return 0;
}