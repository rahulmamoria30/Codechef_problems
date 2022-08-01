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
ll mod (ll a, ll b){
    if(a%b>=0){
        return a%b;
    }
    else{
        return b+a%b;
    }
}
void solve()
{
    int n, m;
    cin>>n>>m;
    vector<int>arr(n);
   
    for(int i=0; i<n; i++){
        cin>>arr[i];
        
    }
    sort(all(arr));
    int ele2=arr[n-1];
    for(int i=n-2; i>=0; i--){
        if(arr[i]!=arr[n-1]){
           ele2=arr[i];
           break;
        }
    }
    int ele1=arr[n-1];
    
    int ans1=ele1+ele1+mod(0, m);
    int ans2=ele2+ele1+mod(ele2-ele1, m);
    cout<<max(ans1, ans2)<<endl;
    
    
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
