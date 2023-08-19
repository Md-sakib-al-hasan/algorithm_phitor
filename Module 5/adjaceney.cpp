#include<bits/stdc++.h>
using namespace std;
int main()
{    int n;cin>>n;
     int adjacency[n][n]= {0};
     int m;cin>>m;
     for(int i=0;i<m;i++){
        int r,c;cin>>r>>c;
        adjacency[r-1][c-1]=15;
        adjacency[c-1][r-1]=15;
     }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<adjacency[i][j]<<" ";
        }
        cout<<endl;
     }
     
     return 0;
}