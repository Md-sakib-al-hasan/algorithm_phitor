#include<bits/stdc++.h>
using namespace std;
const int N=135+7;
int nums[N];
void merge(int l,int r,int mid){
    int Left_size= mid-l+1;
     int L[Left_size+1];
     int right_size=r-(mid+1)+1;
     int R[right_size];
    
     for(int i=l,j=0;i<=mid;i++,j++){
        L[j]=nums[i];
     }
    for(int i=mid+1,j=0;i<=r;i++,j++){
        R[j]=nums[i];
     }
     L[Left_size] = INT_MIN;
     R[right_size] = INT_MIN;
     int lp=0,lr=0;
     for(int i=l;i<=r;i++){
        if(L[lp] >= R[lr]){
            nums[i]=L[lp];
            lp++;
        }else{
            nums[i]=R[lr];
            lr++;
        }
     }
}
void sort_merge(int l,int r){
    if(l==r) return ;
    int mid= (l+r)/2;
    sort_merge(l,mid);
    sort_merge(mid+1,r);
    merge(l,r,mid);
}
int main()
{
     int n;cin>>n;
     for(int i=0;i<n;i++){
        cin>>nums[i];
     }
     sort_merge(0,n-1);
      for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
     }
     

}