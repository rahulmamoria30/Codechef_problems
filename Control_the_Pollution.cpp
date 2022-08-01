#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
int main(){

      int test;
      cin>>test;
      while(test--){
        int n, x, y;
        cin>>n>>x>>y;
        int ans=INT_MAX;
        for(int i=0; i<=n ;i++){
            for(int j=0; j<=n; j++){
                int poll=100*j+4*i;
            (poll>=n) ? ans=min(ans,i*y+j*x):0;
            }
        }
        cout<<ans<<endl;
       
      }

      
    return 0;
}