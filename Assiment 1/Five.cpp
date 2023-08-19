#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;cin>>n;
     int L[n+1];
     
     for(int i=0;i<n;i++){
         cin>>L[i];
     }
     L[n]=INT_MIN;


     int m;cin>>m;
     int R[m+1];
      for(int i=0;i<n;i++){
         cin>>R[i];
     }
     R[m]=INT_MIN;
     int nums[m+n];
      int lp=0,lr=0;
     for(int i=0;i<(m+n);i++){
        if(L[lp] >= R[lr]){
            nums[i]=L[lp];
            lp++;
        }else{
            nums[i]=R[lr];
            lr++;
        }
     }

     for(int i=0;i<(m+n);i++){
         cout<<nums[i]<<" ";
     }

     return 0;
}