#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int> adj[N];
int main()
{
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
    }
    for(int i=1;i<=n;i++){
    cout<<"list"<<i<<" : ";
    for(int v:adj[i]){
      cout<<v<<" ";
    }
    cout<<endl;
   }
   for(int i=1;i<=n;i++){
    vector<int>sto(n+1);
    for(int j=0;j<adj[i].size();j++){
           int a=adj[i][j];
           sto[a]=1;
    }
     for(int i=1;i<sto.size();i++){
        cout<<sto[i]<<" ";
     }
     cout<<endl;
     cout<<endl;
   }
     
     return 0;
}