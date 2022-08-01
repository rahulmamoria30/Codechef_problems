#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
int main(){

      int test;
      cin>>test;
      while(test--){
        ll x;
        cin>>x;
        string str;
        cin>>str;
        int c=0, n=0;
        for(int i=0; i<str.length(); i++){
            if(str[i]=='C'){
              c++;
            }
            else if(str[i]=='N'){
              n++;
            }
            
        }
        if(c>n){
            cout<<(60*x)<<endl;
        }
        else if(c==n){
            cout<<(55*x)<<endl;
        }
        else{
           cout<<(40*x)<<endl;
        }
       
      }

      
    return 0;
}