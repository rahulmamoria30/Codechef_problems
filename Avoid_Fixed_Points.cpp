#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
int main(){

      int test;
      cin>>test;
      while(test--){
        int n;
        cin>>n;
        ll arr[n];
        for(int i=1; i<=n; i++) cin>>arr[i];
        int count=0;
        int index=0;
        for(int i=1; i<=n; i++){
            index=i+count;
            if(arr[i]==index)
            count++;
        }
        cout<<count<<endl;
      }

      
    return 0;
}