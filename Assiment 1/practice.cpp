#include<bits/stdc++.h>
using namespace std;
int main()
{   int n=10;
     int count = 0;
    for (int i = n; i > 0; i /= 2) 
    {
        for (int j = 0; j < n; j+=5) 
        {
            count += 1;
        }
    }

     return 0;
}