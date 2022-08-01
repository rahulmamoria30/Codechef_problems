#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define mset(arr, val) memset(arr, val, sizeof(arr))
#define loop(i, a, b) for (ll i = a; i < b; ++i)
#define dloop(i, a, b) for (ll i = a; i >= b; --i)
#define all(a) a.begin(), a.end()
#define lar 1000000007
#define pq priority_queue
#define pll pair<ll, ll>
#define ss second
#define ff first
#define pb push_back
#define ppb pop_back
#define umap unordered_map
#define ub upper_bound
#define lb lower_bound
#define br "\n"
#define sp " "
const int N = 2e5 + 1;

void solve()
{
    ll n; cin>>n;
    vector<ll>arr(n), odd, even;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    ll sum=0;
    for(ll i=0; i<n; i++){
       if(i%2==0){
           sum+=abs(arr[i]);
           even.push_back(abs(arr[i]));
       }
       else{
           sum+= -1*abs(arr[i]);
           odd.push_back(abs(arr[i]));
       }
    }
    ll mie=*min_element(even.begin(), even.end());
    ll mxo=*max_element(odd.begin(), odd.end());
    if(mie<mxo){
        sum+=2*(mxo-mie);
    }
    cout<<sum<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}