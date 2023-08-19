#include<bits/stdc++.h>
using namespace std;
int main()
{
      vector<int> myVector = {2,2,2,3,3,4,3 };
      sort(myVector.begin(), myVector.end());
     auto last= unique(myVector.begin(),myVector.end());
     myVector.erase(last, myVector.end());
      for(int c:myVector){
        cout<<c<<endl;
      }
     return 0;
}