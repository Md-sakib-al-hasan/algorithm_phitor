#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
const int N=1e5+10;
const int INF= 1e9+9;
vector<pii> adj[N];
vector<int>dist(N,INF);
vector<int>visited(N,false);
 void bfs(int s){
   priority_queue<pii,vector<pii>,greater<pii>>pq;
   dist[s]=0;
   visited[s]=true;
   pq.push({dist[s],s});
   while (!pq.empty())
   {
       int u=pq.top().second;
       pq.pop();
       visited[u] = true;
       for(pii vpair:adj[u]){
           int v=vpair.first;
           int w=vpair.second;
         if(dist[v]>dist[u]+w){
            pq.push({dist[v],v});
            dist[v]= dist[u]+w;
         }
       }
       
   }
   
 }
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v,w;cin>>v>>u>>w;
        adj[v].push_back({u,w});
    }
    int sur,di;cin>>sur>>di;
    bfs(sur);
    cout<<dist[di]<<endl;
     return 0;
}