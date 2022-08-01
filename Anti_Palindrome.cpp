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
          string str;
          cin>>str;
          unordered_map<char, int>mp;
          for(int i=0; i<n; i++){
              mp[str[i]]++;
          }
          int freq=0;
          char c;
          for(auto it:mp){
              if(freq<it.second){
                  c=it.first;
                  freq=it.second;
              }
          }
        //   string ans="";
        //   for(int i=0; i<n; i++){
        //       if(str[i]!=c)
        //       ans+=str[i];
        //   }
        //   for(int i=0; i<freq; i++){
        //       ans+=c;
        //   }
          if(n%2!=0 || (n%2==0 and freq>n/2))
          cout<<"NO";
          else{
              sort(str.begin(), str.end());
              reverse(str.begin()+n/2, str.end());
              cout<<"YES"<<endl;
              for(int i=0; i<n; i++){
                  cout<<str[i];
              }
          }
        cout<<endl;
      }

      
    return 0;
}