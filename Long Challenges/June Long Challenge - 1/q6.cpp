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
ll solve2(ll n)
{
    map<ll,ll> mp;
    while(n%2==0)
    {
        mp[2]++;
        n=n/2;
    }
    for(ll i=3;i<=sqrtl(n);i+=2)
    {
        while(n%i==0)
        {
            mp[i]++;
            n=n/i;
        }
    }
    if(n>2) mp[n]++;
    ll ans=1;
    for(auto c:mp)
    {
        ans=ans*(c.ss+1);
    }
    return ans;
}
void solve()
{
    ll n, x, y, p, q, m = 0, k;
    cin >> n >> m;
    x=max(n,m)-min(n,m);
    cout << solve2(x) << nl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll  t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}