#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int> adj[N];
bool visited[N];
int depht[N];
void dfs(int u){
    visited[u] = true;
    
    for(int v:adj[u]){
    if(visited[v]) continue;
    depht[v] = depht[u]+1;
      dfs(v);
    }
}
int main()
{   int n,m;cin>>n>>m;
   for(int i=0;i<m;i++){
    int u,v;cin>>u>>v;
     adj[u].push_back(v);
     adj[v].push_back(u);
   }
     dfs(1);
   for(int i=0;i<n;i++){
    cout<<depht[i]<<endl;
   }
     return 0;
}