#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define ull unsigned long long
#define sz(x) x.size()
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(x) x.begin(), x.end()
#define vi vector<ll>
#define mat vector<vi>
#define pii pair<ll, ll>
#define vii vector<pii>
#define vc vector<char>
#define pcc pair<char, char>
#define vcc vector<pcc>
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define rloop(i, b, a) for (ll i = b; i >= a; i--)
#define fir(it, v) for (auto it = v.begin(); it != v.end(); it++)
#define ff first
#define ss second
#define nl "\n"
#define sp " "
#define uo unordered_set<ll>
#define os set<ll>
const ll z = 1e9 + 7;
const ll mod = 998244353;

/*----------------------------------pradeepkumar--------------------------------------*/

void solve()
{
    ll n, x, y, p, q, m = 0, k;
    cin >> n ;
    vi v(n,0),a;
    loop(i,0,n)
    {
        a.pb(i+1);
    }
    x=n-1;
    for(ll i=n-1;i>=0;i-=2)
    {
        v[i]=a[x--];
    }
    x=0;
    for(ll i = n-2;i>=0;i-=2)
    {
        v[i]=a[x++];
    }
    loop(i,0,n)
        cout << v[i] << sp;
    cout << nl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}