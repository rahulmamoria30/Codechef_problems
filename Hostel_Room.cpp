#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
int main(){

      int test;
      cin>>test;
      while(test--){
        int n, x; 
        cin>>n>>x;
        int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        int sum=x;
        int ans=0;
        for(int i=0; i<n; i++){
            sum+=arr[i];
            if(sum>ans)
            ans=sum;
            // ans=max(sum, ans);
        }
        cout<<ans<<endl;
      }

      
    return 0;
}