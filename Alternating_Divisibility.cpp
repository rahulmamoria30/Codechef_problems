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
    ll n;
    cin>>n;
    int i;
    if(n%2==0){
        for( i=1; i<=n; i+=2){
            cout<<i<<" "<<2*i<<" ";
        }
        cout<<endl;
    }
    else{
        n=n-1;
        for( i=1; i<=n; i+=2){
            cout<<i<<" "<<2*i<<" ";
        }
        cout<<i+2<<endl;
    }
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




