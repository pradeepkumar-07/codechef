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
    cin >> n;
    x = 0;
    map<ll, ll> mp;
    vi v;
    loop(i, 0, n)
    {
        cin >> p;
        v.pb(p);
        x = 0;
        while (p)
        {
            if (p % 2)
            {
                mp[x]++;
            }
            x++;
            p /= 2;
        }
    }
    y = 0;
    for (auto c : mp)
    {
        if (c.ss > 1)
        {
            y++;
        }
    }
    if (y == 0)
        cout << "NO\n";
    else
    {
        cout << "YES\n";

        for (auto c : mp)
        {
            if (c.ss > 1)
            {
                cout << c.ss << nl << 1 << sp;
                k = powl(2, c.ff);
                x = c.ss;
                y = 0;
                while (x)
                {
                    p = v[y] & k;
                    if (p == k)
                    {
                        x--;
                        if (x == 0)
                        {
                            cout << n << nl;
                            return;
                        }
                        else
                            cout << y + 1 << nl << y + 2 << sp;
                    }
                    y++;
                }
            }
        }
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