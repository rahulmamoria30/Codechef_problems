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
        int arr[2*n];
        for(int i=0; i<2*n; i++){
            cin>>arr[i];
        }
        int sum=0;
        for(int i=0; i<2*n; i++){
            sum+=arr[i];
        }
        if(sum%2==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
      }

      
    return 0;
}