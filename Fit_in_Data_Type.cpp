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
          if(x<=n){
              cout<<x<<endl;
          }
          else{
              while(x>n){
                  x=x-n-1;
              }
              cout<<x<<endl;
          }
      }

      
    return 0;
}