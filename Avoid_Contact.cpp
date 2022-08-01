#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
int main(){

      int test;
      cin>>test;
      while(test--){
          int x,y;
          cin>>x>>y;
          if(x==y)
          cout<<(2*x-1)<<endl;
          else
          cout<<(x+y)<<endl;
      }

      
    return 0;
}