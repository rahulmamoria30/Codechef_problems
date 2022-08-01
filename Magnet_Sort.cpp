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
bool check(string s, ll left, ll right, ll x){
    for(int i=left; i<right; i++){
        if(s[i]!=s[x]) {
            return true;
        }
    }
    return false;
}
void solve()
{
    ll n; cin>>n;
    vector<ll>arr(n);
    vector<ll>brr(n);
    for(ll i=0; i<n; i++) 
    {
        cin>>arr[i];
        brr[i]=arr[i];
    }

    string str; cin>>str;
    int cn=0;
    for(ll i=0; i<n; i++){
        if(str[i]=='S') cn++;
    }
    if(is_sorted(arr.begin(), arr.end())){
        cout<<0<<endl;
        return;
    }
    if(cn==n or cn==0){
        cout<<-1<<endl;
        return;
    }

  
    ll l=n+1, r=-1;
    for(ll i=0; i<n; i++){
        if(arr[i]!=brr[i]){
            l=min(l, i);
            r=max(r,i);
        }
    }
    // bool check1=false, check2=false;
    // for(int i=0; i<l; i++){
    //     if(str[i]!=str[r]) {
    //         check1=true;
    //     }
    // }
    //  for(int i=r; i<n; i++){
    //     if(str[i]!=str[l]) {
    //         check2=true;
    //     }
    // 
    if(str[l]!=str[r]  || check(str, 0, l, r)|| check(str, r, n, l)){
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
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
