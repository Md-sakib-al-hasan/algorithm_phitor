#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
int admat[N][N];
int main()
{  int n,m;cin>>n>>m;

    for(int i=0 ; i<n ; i++){
        int u,v;cin>>u>>v;
        admat[u][v]=1;
        // admat[v][u]=1;

    }
    for(int i=1;i<=n;i++){
        for(int j=1; j<=n; j++){
           cout<< admat[i][j]<<" ";
        }
        cout<<endl;
    }
     
     return 0;
}