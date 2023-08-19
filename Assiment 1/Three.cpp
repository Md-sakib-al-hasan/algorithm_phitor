#include<bits/stdc++.h>
using namespace std;
int main()

{    
    int n;cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int tar;cin>>tar;
    int l=0;
     int r=n-1;
     int flag=0;
     while (l<r)
     {
        int mid= (l+r)/2;
        if(nums[mid] ==tar ){
           if(nums[mid+1] == tar){
            flag=1;
            cout<<"YES";
           }
            break;
        }else if (tar>nums[mid])
        {
             l=mid+1;
        }else{
            r=mid-1;
        }
        
     }
     if(flag==0){
        cout<<"NO"<<endl;
     }
     
     return 0;
}