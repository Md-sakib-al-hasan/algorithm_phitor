#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>adj[N];
int visited[N];
int level[N];
vector<int>stro[N];
int strocon=0;
void bfs(int s){
    strocon++;
    queue<int>q;
    q.push(s);
    visited[s]=true;
    level[s]=0;
    while (!q.empty())
    {
        int u=q.front();
        q.pop();
         stro[strocon].push_back(u);
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
        adj[v].push_back(u);
     }
    int c=0;
    for(int i=1;i<=n;i++){
        if(visited[i]) continue;
        bfs(i);
        c++;
    }
    cout<<c<<endl;

    for(int i=1;i<c+1;i++){
        for(int v:stro[i]){
            cout<<v<<" ";
        }
        cout<<endl;
    }
     return 0;
}