#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
int main(){

      ll test;
      cin>>test;
      while(test--){
          ll n;
          cin>>n;
          ll arr[n][2];
          for(ll i=0; i<n; i++){
              for(int j=0; j<2; j++){
                  
                  cin>>arr[i][j];
              }   
          }
          unordered_set<int>st1,st2;
          for(int i=0; i<n; i++){
              for(int j=0; j<2; j++){
                  if(j==0){
                      st1.insert(arr[i][j]);
                  }
                  else if(j==1){
                      st2.insert(arr[i][j]);
                  }
              }
          }
          cout<<st1.size()+st2.size()<<endl;
      }

      
    return 0;
}