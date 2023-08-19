#include<bits/stdc++.h>
using namespace std;
int main()
{    int n;cin>>n;
     vector<int> adj[n];
     for(int i=0;i<5;i++){
        int v,c;cin>>v>>c;
        adj[v-1].push_back(c-1);
     }
       for(int i=0;i<4;i++){
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]+1<<" ";
        }
        cout<<endl;
     }

     return 0;
}