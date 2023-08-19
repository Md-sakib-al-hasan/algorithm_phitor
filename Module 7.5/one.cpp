#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>adj[N];
int visited[N];
// vector<int>v1;
stack<int>st;
void bfs(int s){
    queue<int>q;
    q.push(s);
    visited[s]=true;
    while (!q.empty())
    {
        int u=q.front();
        q.pop();
        st.push(u);
        for(int v:adj[u]){
            if(visited[v]) continue;
            q.push(v);
            visited[v]=true;
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

    //  int sk=v1.size();
    //  for(int i=0;i<sk;i++){
    //    cout<<v1.back()<<endl;
    //    v1.pop_back();
    
    //  }
    int sk= st.size();
    for(int i=0;i<sk;i++){
        cout<<st.top()<<endl;
         st.pop();
    }
     return 0;
}