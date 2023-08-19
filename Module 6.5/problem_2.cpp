#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int> adj[N];
int main()
{   
    
    
    
    int n;cin>>n;
   for(int i=1;i<=n;i++){
      int str[n];
      int str_con=0;
     for(int j=1;j<=n;j++){
        int sk;cin>>sk;
        if(sk!=0){
            str[str_con]=j;
            str_con++;
        }
     }
      for(int k=0;k<str_con;k++){
         adj[i].push_back(str[k]);
      }

   }
   for(int i=1;i<=n;i++){
    cout<<"list"<<i<<" : ";
    for(int v:adj[i]){
      cout<<v<<" ";
    }
    cout<<endl;
   }
     return 0;
}