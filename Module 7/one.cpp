#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>adj[N];
bool visited[N];
int level[N];

bool bfs(int u,int p=-1){
          visited[u]= true;
          bool cycle=false;
        for(int v:adj[u]){
            if(v==p) continue;
            if(visited[v]) return true;
            cycle |= bfs(u,v);
        }
        return cycle;
}

int main()
{
     int n,m;cin>>n>>m;
     for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        adj[v].push_back(u);
        adj[u].push_back(v);
     }
     bool iscile=false;
     for(int i=1;i<=n;i++){
        if(visited[i]) continue;
        iscile |=bfs(1);
     }
     cout<<iscile<<endl;

     return 0;
}