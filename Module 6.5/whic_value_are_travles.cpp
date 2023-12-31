#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int> adj[N];
bool visited [N];
int depth[N];
void dfs(int u)
{  
   visited [u]=true;
//    cout<<u<<endl;
  for(int v:adj[u])
  { 
    if(visited[v]) continue;
    depth[v]= depth[u]+1;
      dfs(v);
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
//    for(int i=0;i<n;i++){
//      cout<<"list"<<i<<" : ";
//     for(auto v:adj[i]){
//         cout<<v<<" ";
//     }
//     cout<<endl;
//    }
   dfs(1);
   cout<<depth[7]<<endl;
   cout<<depth[4]<<endl;
     
     return 0;
}