#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
int main(){

      int test;
      cin>>test;
      while(test--){
          int x, y;
          cin>>x>>y;
          if(y>=x){
              cout<<(x/2)<<endl;
          }
          else{
              int half=x/2;
              if(half<=y){
                  cout<<half<<endl;
              }
              else{
                  cout<<y<<endl;
              }
          }
      }

      
    return 0;
}