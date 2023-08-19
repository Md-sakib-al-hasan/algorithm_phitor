#include<bits/stdc++.h>
using namespace std;
const int N=1e3+7;
const int INF=1e9+7;
int n,m;
int d[N][N];
void  print_max(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(d[i][j] == INF) cout<<"x"<<" ";
            else cout<<d[i][j]<<" ";
            
        }
        cout<<endl;
    }
}
void dist_inisialize(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i!=j)
              d[i][j]=INF;
        }
    }
}
int main()
{
     cin>>n>>m;
     dist_inisialize();
     for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        d[u][v]=w;
     }
  

     for(int k=1;k<=n;k++){
         for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            d[i][j]=min(d[i][j],d[i][k]+d[k][j] );
        }
    }
     }
        print_max();
     return 0;
}