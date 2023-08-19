#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>adj[N];
bool visited[N];
int level[N];
void dfs(int u){
	visited[u] = true;
	for(int v: adj[u]){
		if(visited[v] == true) continue;
		dfs(v);
	}
	
}
int main()
{  
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;cin>>v>>u;
        adj[v].push_back(u);
    }
    int k;cin>>k;
    dfs(k);  
    int c=0;
    for(int i=0;i<=n;i++){
        if(visited[i]){
            c++;
        }
    }
    cout<<c-1<<endl;
     return 0;
}