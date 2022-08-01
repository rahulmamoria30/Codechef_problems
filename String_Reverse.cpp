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

    string str;
    cin >> str;
    string temp= str;
    reverse(str.begin(), str.end());
    int len= str.length();
    int ans = 0;
    int i=len-1;
    int j=len-1;
    while(i>=0 )
    {
        while (i >= 0 && str[i] != temp[j])
        {
            ans++;
            i--;
        }
        if (i >= 0)
        {
            i--;
            j--;
        }
    }
    cout << ans << endl;;
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