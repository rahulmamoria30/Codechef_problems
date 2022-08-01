#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
int main(){

      ll test;
      cin>>test;
      while(test--){
          ll x;
          cin>>x;
        //   int a,b,c;

         
        //   cout<<i<<" "<<j<<" "<<k<<" "<<endl;
        ll a=1, b=2, k;
        for( k=3; k<=2*x; k++){
            if((a|b)&(b|k)&(k|a)==x){
            // cout<<a<<" "<<b<<" "<<k<<endl;
            break;
            }
        }
        cout<<a<<" "<<b<<" "<<k<<endl;
      }

      
    return 0;
}


