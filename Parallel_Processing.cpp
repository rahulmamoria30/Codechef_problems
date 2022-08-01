#include <bits/stdc++.h>
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
    ll arr[n];
    ll res[n];
    for(int i=0; i<n; i++)
     cin>>arr[i];
     ll sum=0;
     for(int i=0; i<n; i++){
        sum+=arr[i];
        res[i]=sum;
     }
     ll ans=sum;
     for(int i=0; i<n; i++){
         ans=min(ans, max(res[i], sum-res[i]));
     }
     cout<<ans<<endl;
   
    // ll sum=0;
    // for(int i=0; i<n; i++){
    //     sum+=arr[i];
    // }
    // if(sum%2==0){
    //     cout<<sum/2<<endl;
    // }


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