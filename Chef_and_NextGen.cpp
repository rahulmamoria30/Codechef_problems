#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
int main(){

      int test;
      cin>>test;
      while(test--){
        int a , b, x, y;
        cin>>a>>b>>x>>y;
        if(x*y>=a*b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
      }

      
    return 0;
}