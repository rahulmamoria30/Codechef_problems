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
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    int holiday[]={6, 7, 13, 14, 20, 21, 27, 28};
    unordered_set<int>st;
    for(int i=0; i<8; i++){
        st.insert(holiday[i]);
    }
    int ans=0;
    for(int i=0; i<n; i++){
        if(st.find(arr[i])==st.end()){
            ans++;
        }
    }
    cout<<(8+ans)<<endl;
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
