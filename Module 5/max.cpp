#include<bits/stdc++.h>
using namespace std;
int main()
{
     int arr[4][4]={0};
     for(int i=0;i<5;i++){
        int r,c;cin>>r>>c;
        arr[r-1][c-1]=15;
     }
     for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
     return 0;
}