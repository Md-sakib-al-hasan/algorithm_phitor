#include<bits/stdc++.h>
using namespace std;
const int  N=1e5+5;
vector< int > adj[N];
int visited[N];
vector<int>sore(N);
int con=0;
void bfs(int s){
  
	queue<int> q;
	q.push(s);
	visited[s]=true;
	while(!q.empty()){
		int u = q.front();
		q.pop();
		sore[con]++;
		for(int v: adj[u]){
			if(visited[v]) continue;
			q.push(v);
			visited[v] = true;
		}
}
  con++;
}
int main()
{   
     int n,m;cin>>n>>m;
     for(int i=0;i<m;i++){
       int u,v;cin>>u>>v;
       adj[u].push_back(v);
       adj[v].push_back(u);
     }
     for(int i=0;i<=N;i++){
        if(adj[i].size() != 0){
          if(visited[i]) continue;
          bfs(i);
        }
     }
    sort(sore.begin(),sore.end());
   for( auto v:sore){
    if(v==0)continue;
    cout<<v<<" ";
   }
     return 0;
}