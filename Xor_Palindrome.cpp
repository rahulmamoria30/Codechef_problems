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
        int zero=0, one=0;
        for(int i=0; i<n; i++){
            if(str[i]=='1')
            one++;
            else
            zero++;
        }
        if(n%2==1){
            cout<<"YES"<<endl;
        }
        else{
            if(zero==one){
                cout<<"YES"<<endl;
            }
            else if(zero==n or one==n){
                cout<<"YES"<<endl;
            }
            else if(zero%2==0 and one%2==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
                }
        }
      }

      
    return 0;
}