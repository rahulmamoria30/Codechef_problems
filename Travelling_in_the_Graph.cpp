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
void dfs(ll src, vector<bool>&vis, vector<ll>adj[]){
        vis[src]=true;
        for(auto i: adj[src]){
            if(vis[i]==false){
                dfs(i,vis, adj);
            }
        }
}

void solve()
{
     ll n,m;
       cin>>n>>m;
       vector<ll> adj[n];
      for(int i=0;i<m;i++)
      {
        ll x,y;
        cin>>x>>y;
        x--,y--; 
        adj[x].push_back(y);
        adj[y].push_back(x);
      }
    vector<bool>vis(n, false);
      ll count=0;
        for(int i=0; i<n; i++){
            if(vis[i]==false){
                count++;
                dfs(i, vis, adj);
            }
        }

        cout<<count-1<<endl;
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