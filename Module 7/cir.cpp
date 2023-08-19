#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int> adj[N];
bool visited[N];



// bool dfs(int u,int p){
//  bool cycle= false;
//   visited[u]=true;
//   for(int v:adj[u]){
//     if(v == p) continue;
//     if(visited[v]) return true;
//     cycle = cycle | dfs(v,u) ;
// }
// return cycle;
// }
bool dfs_ci(int u,int p=-1){
  bool cicle= false;
  visited[u] =true;
  for( int v:adj[u]){
    if( v== p) continue;
    if(visited[v]) return true;
    cicle |= dfs_ci(v,u);
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

bool iscycle = false;
for(int i=1;i<=n;i++){
  if(visited[i])continue;
   iscycle |= dfs_ci(1);
}
 if(iscycle){
    cout<<"cicle_ditected";
 }else{
    cout<<"no";
 }
     return 0;
}