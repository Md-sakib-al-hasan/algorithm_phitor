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
int main()
{    
     int n,m;cin>>n>>m;
     for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[u].push_back(v);
     }
     bfs(1);
     int val;cin>>val;
     cout<<level[val];
     return 0;
}