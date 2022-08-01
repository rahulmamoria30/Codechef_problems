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
#define mod 1000000007
const int N = 2e5 + 1;

void solve()
{
    ll n, m;
    cin>>n>>m;
    vector<ll>arr(n);
    for(ll i=0; i<n; i++){
        cin>>arr[i];
    }
  
    while(m--){
        ll a, b;
        cin>>a>>b;
        vector<ll>ary(2*b);
        for(ll i=0; i<2*b; i++){
            cin>>ary[i];
        }
        ll tmp=arr[a-1];
        arr[a-1]=0;
        for(ll i=0; i<ary.size()-1; i+=2){
          arr[ary[i+1]-1]=(arr[ary[i+1]-1]+tmp*(ary[i]))%mod;
        }

        
        
    }
    for(auto x: arr){
        cout<<x<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    solve();
}