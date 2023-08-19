#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
const int N = 1e3+10;
int  visited[N][N];
int level[N][N];
pii parent[N][N];
vector<string>g;
int n,m;
vector<pii>dirce ={{0,-1},{0,1},{-1,0},{1,0}};


bool isValid(int i,int j){
   return (i>=0 && i<n && j>=0 && j<m);
}
void dfs(int si,int sj)
{
   queue<pii>q;
   q.push({si,sj});
   visited[si][sj] = true;
   level[si][sj] = 0;
   while (!q.empty())
   {
       pii upari = q.front();
        int i= upari.first;
        int j= upari.second;
        q.pop();
        for(auto d:dirce){
              int ni=i+d.first;
              int nj= j+d.second;
            if(isValid(ni,nj) && !visited[ni][nj] && g[ni][nj] != '#' ){
                q.push({ni,nj});
                visited[ni][nj] =true;
                level[ni][nj] = level[i][j]+1;
                parent[ni][nj]= {i,j};
            }
        }
   }
   
   
}
int main()
{
     int si,sj,di,dj;
     cin>>n>>m;
     for(int i=0;i<n;i++){
        string x;
        cin>>x;
        for(int j=0;j<m;j++){
            if(x[j]=='A')
              si=i,sj=j;
            if(x[j] == 'B')
             di=i,dj=j;
        }
        g.push_back(x);
     }
     dfs(si,sj);

     if(level[di][dj] != 0){
        cout<<"yes"<<endl;
        cout<<level[di][dj]<<endl;
     }else{
        cout<<"N0"<<endl;
     }
     vector<pii>path;
     pii dist ={di,dj};
     while (!(dist.first==si && dist.second==sj))
     {
         path.push_back(dist);
         dist=parent[dist.first][dist.second];
     }
     path.push_back({si,sj});
      reverse(path.begin(), path.end());
         for(int i=1;i<path.size();i++)
    {
    	//path[i-1] -> path[i]
    	if(path[i-1].first == path[i].first)
    	{
    		if(path[i-1].second == path[i].second-1)
    			cout << "R";
    		else
    			cout << "L";
    	}
    	else
    	{
    		if(path[i-1].first == path[i].first-1)
    			cout << "D";
    		else
    			cout << "U";
    	}
    }

     return 0;
}