#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>adj[N];
bool visited[N];
int level[N];
void bfs(int s){
	queue<int> q;
	q.push(s);
	visited[s]=true;
	level[s]=0;

	while(!q.empty())
	{
		int u = q.front();
		q.pop();
		for(int v:adj[u])
		{
			if(visited[v]) continue;
			q.push(v);
			visited[v] = true;
			level[v] = level[u] + 1;
		}

	}
}
int main()
{  memset(level,0,sizeof(level));
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;cin>>v>>u;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }
    bfs(0);
    int val;cin>>val;
	bool flag=0;
    for(int i=0;i<N;i++){
	  if(level[i] == val){
        flag =1;
        cout<<i<<" ";
      }
	}
     return 0;
}