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
    int d; cin>>d;
    if(d%2!=0){
        cout<<-1<<endl;
        return;
    }
    else{
        cout<<0<<" "<<d/2<<endl;
         cout<<d/2<<" "<<0<<endl;
          cout<<0<<" "<<-d/2<<endl;
           cout<<-d/2<<" "<<0<<endl;
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}