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
    ll n, x, y, p, q, m, k;
    cin >> n >> m;
    if (m % 2)
    {
        if (n == 1 || n < m)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    else
    {
        n -= m;
        if (n % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main()
{
    ll int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}