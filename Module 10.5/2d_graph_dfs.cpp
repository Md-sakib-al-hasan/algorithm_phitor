#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
const int N=1e3+10;
vector<string>g;
vector<pii>dirce ={{0,1},{0,-1},{1,0},{-1,0}};
bool visited[N][N];
int m,n;
bool isValid(int i,int j){
    return (i>=0 && i<n && j>=0 && j<m);
}
void  dfs(int si ,int sj){
    if(!isValid(si,sj))return;
    if(visited[si][sj])return;
    if(g[si][sj] == 'x')return;
      visited[si][sj]=true;
    for(pii d:dirce){
        dfs(si+d.first,sj+d.second);
    }
}
int main()
{   int si,sj,di,dj;
    cin>>n>>m;
     for(int i=0;i<n;i++){
        string x;
        cin>>x;
        for(int j=0;j<m;j++){
            if(x[j] == 's')
                 si=i,sj=j;
            if(x[j] == 'e')
               di=i,dj=j;
        }
      g.push_back(x);
     }
      
     dfs(si,sj);
     if(visited[di][dj]){
        cout<<"Yes"<<endl;
     }else{
        cout<<"No"<<endl;
     }
    
     return 0;
}