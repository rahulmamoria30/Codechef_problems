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
    int n;
    cin>>n;
    if(n==2){
        cout<<-1<<endl;
        return;
    }
    if(n%2!=0){
        for(int i=n; i>=1; i--){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else{
        for(int i=1; i<=n-3; i++){
            cout<<i<<" ";
        }
        cout<<n<<" "<<n-2<<" "<<n-1<<endl;
        
        
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