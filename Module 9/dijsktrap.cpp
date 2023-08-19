#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pi;
const int N=1e5+5;
const int INF=1e9+10;
vector<pi> adj[N];
vector<int>dist(N,INF);
vector<bool>visited(N);
void  dijs(int s){
    priority_queue<pi,vector<pi>,greater<pi>>pq;
    dist[s]=0;
    pq.push({dist[s],s});
    while (!pq.empty())
    {
        int u=pq.top().second;
        pq.pop();
        visited[u]=true;
        for(pi vpair:adj[u]){
            int v=vpair.first;
            int w=vpair.second;
            if(visited[v]) continue;
            if(dist[v]> w+dist[u]){
                dist[v]=dist[u]+w;
                pq.push({dist[v],v});
            }
        }
    }
    
}

int main()
{   
      int m,n;cin>>n>>m;
     for(int i=0;i<m;i++){
       int u,v,w;cin>>u>>v>>w;
       adj[u].push_back({v,w});
       adj[v].push_back({u,w});
     }
     dijs(1);
     for(int i=1;i<=n;i++){
        cout<<dist[i]<<endl;
     }
     return 0;
}