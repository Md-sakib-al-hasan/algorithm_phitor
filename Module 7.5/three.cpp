#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>adj[N];
int visited[N];
int level[N];

void bfs(int s){
    stack<int>q;
    q.push(s);
    visited[s]=true;
    level[s]=0;
    while (!q.empty())
    {
        int u=q.top();
        q.pop();
        for(int v:adj[u]){
            if(visited[v]) continue;
            q.push(v);
            visited[v]=true;
          level[v]=level[u]+1;
        }
       
    }
    

}

bool dfs(int u,int p=-1){
    bool cicle=false;
    visited[u]= true;
     
    for(int v:adj[u]){
        if(v==p) continue;
        if(visited[v]) return true;
        cicle = cicle | dfs(v,u);
    }
    return cicle;
}

int main()
{    
     int n,m;cin>>n>>m;
     for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
     }
    bool iscicle= false;
    for(int i=1;i<=n;i++){
        if(visited[i]) continue;
        iscicle |= dfs(i);
    }
    cout<<iscicle<<endl;
     return 0;
}