#include <bits/stdc++.h>
#include <iostream>
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
bool check1(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '1')
        {
            return false;
        }
    }
    return true;
}
bool check2(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '0')
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (s == "1")
    {
        cout << 1 << endl;
        return;
    }
    else if (check1(s))
    {
        cout << 0 << endl;
        return;
    }
    else if (check2(s))
    {
        cout << 2 << endl;
        return;
    }
    else{
        for(int i=0; i<n-1; i++){
            if(s[i]=='1' and s[i+1]=='1'){
                cout<<2<<endl;
                return;
            }
        }
         cout << 1 << endl;
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
